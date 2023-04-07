#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    math = new cmath();
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
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //    tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::update_table(QTableWidget *tableWidget, QMap<RangeCamouflage, QString> _range_dict)
{
    for (int i=0;i<tableWidget->rowCount();i++) {
        set_combo_box_range_in_tableWidget(tableWidget, get_combo_box_camouflage_range(math->range_dict), i);
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

void MainWindow::on_comboBox_range_currentTextChanged(const QString &arg1)
{
    int row_index = sender()->objectName().toInt();
    qDebug()<<arg1<<row_index;
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
