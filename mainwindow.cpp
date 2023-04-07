#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    math = new cmath();
    create_button_calc(create_button(":/new/prefix1/icons/calc.gif","Нажмите для вычисления",64));
    resize_table(ui->tableWidget_weapons);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_count_valueChanged(int arg1)
{
    weapon_count = arg1;
    ui->tableWidget_weapons->setRowCount(arg1);
    update_table(ui->tableWidget_weapons, math->range_dict);
    resize_table(ui->tableWidget_weapons);
}

void MainWindow::resize_table(QTableWidget *tableWidget)
{
    tableWidget->horizontalHeader()->resizeContentsPrecision();
    tableWidget->verticalHeader()->resizeContentsPrecision();
    tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    tableWidget->setColumnWidth(0,150);
    //    tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::update_table(QTableWidget *tableWidget, QMap<RangeCamouflage, QString> _range_dict)
{
    for (int i=0;i<tableWidget->rowCount();i++) {
        set_combo_box_range_in_tableWidget(tableWidget, get_combo_box_camouflage_range(math->range_dict), i);
        tableWidget->setCellWidget(i,1,get_combo_box_for_obj(math->RangeCamouflageVisual));
    }
}

QComboBox *MainWindow::get_combo_box_camouflage_range(QMap<RangeCamouflage, QString> _range_dict)
{
    QComboBox *comboBox = new QComboBox();
    foreach (QString value, _range_dict.values()) {
        comboBox->addItem(value);
    }
    return comboBox;
}

void MainWindow::set_combo_box_range_in_tableWidget(QTableWidget *tableWidget, QComboBox *comboBox_range, int i)
{
    tableWidget->setCellWidget(i,0,comboBox_range);
    tableWidget->cellWidget(i,0)->setObjectName(QString("%1").arg(i));
    connect(comboBox_range, SIGNAL(currentTextChanged(QString)), this, SLOT(on_comboBox_range_currentTextChanged(QString)));
}

QComboBox *MainWindow::get_combo_box_for_obj(QMap<QString, qreal> _dict)
{
    QComboBox *comboBox = new QComboBox();
    foreach (QString key, _dict.keys()) {
        comboBox->addItem(key);
    }
    return comboBox;
}

bool MainWindow::check_on_empty_table(int _weapon_count)
{
    if (_weapon_count == 0) {
        return true;
    }
    return false;
}

qreal MainWindow::get_P_detect()
{
    qreal koef = math->get_koef_from_tableWidget(ui->tableWidget_weapons);
    qreal local_koef = math->get_local_koef(ui->comboBox_local);
    qreal weather_koef = math->get_weather_koef(ui->comboBox_visual);
    qreal fog_koef = math->get_fog_koef(ui->checkBox_fog);
    qreal result_koef = koef-local_koef+weather_koef+fog_koef;
    qreal P = math->get_P_for_variant(math->variant, ui->comboBox_obj);
    qreal P_detect = result_koef*P;
    if (P_detect > 1) {
        return 1;
    }
    return P_detect;
}

void MainWindow::on_comboBox_range_currentTextChanged(const QString &arg1)
{
    int i = sender()->objectName().toInt();
    if (arg1=="Оптический") {
        ui->tableWidget_weapons->setCellWidget(i,1,get_combo_box_for_obj(math->RangeCamouflageVisual));
    }
    else if (arg1=="Инфракрасный") {
        ui->tableWidget_weapons->setCellWidget(i,1,get_combo_box_for_obj(math->RangeCamouflageInfrared));
    }
    else if (arg1=="Радиолокационный") {
        ui->tableWidget_weapons->setCellWidget(i,1,get_combo_box_for_obj(math->RangeCamouflageRl));
    }
}

void MainWindow::on_pushButton_calc()
{
    if (check_on_empty_table(weapon_count)) {
        QMessageBox::critical(this,"Ошибка","Количество средств скрытия не может быть равно 0.");
        return;
    }
    qreal P_detect = get_P_detect();
    if (P_detect<0.5) {
        QMessageBox::critical(this,"Высокая вероятность обнаружения",QString("Вероятность скрытия %1 меньше порогового значения 0.5, возможно обнаружения скрываемого объекта.").arg(P_detect));
    }
    else {
        QMessageBox::information(this,"Скрытие успешно",QString("Вероятность скрытия %1>0.5, достигнуто пороговое значение вероятности успешного скрытия.").arg(P_detect));
    }
}

void MainWindow::on_comboBox_visual_currentTextChanged(const QString &arg1)
{
    if ((arg1=="Ночь") || (arg1=="Сумерки")) {
        ui->checkBox_fog->show();
    }
    else {
        ui->checkBox_fog->hide();
    }
}

void MainWindow::create_button_calc(AnimatedLabel *button)
{
    connect(button, SIGNAL(clicked()), SLOT(on_pushButton_calc()));
}

AnimatedLabel *MainWindow::create_button(QString icon_path, QString legend, int size)
{
    AnimatedLabel* button = new AnimatedLabel(this, icon_path, legend, size, size);
    ui->gridLayout_calc->addWidget(button);
    return button;
}
