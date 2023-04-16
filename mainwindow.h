#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QComboBox>
#include <QSpinBox>
#include <QDebug>
#include <QMessageBox>
#include "cmath.h"
#include "animatedlabel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_spinBox_count_valueChanged(int arg1);
    void on_comboBox_range_currentTextChanged(const QString &arg1);
    void on_pushButton_calc();
    void on_comboBox_visual_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    cmath* math;

    //Locals
    int weapon_count = 0;
    void create_button_calc(AnimatedLabel* button);
    AnimatedLabel *create_button(QString icon_path, QString legend, int size);

    void resize_table(QTableWidget *tableWidget);
    void update_table(QTableWidget *tableWidget, QMap<RangeCamouflage, QString> _range_dict);
    QComboBox *get_combo_box_camouflage_range(QMap<RangeCamouflage, QString> _range_dict);
    void set_combo_box_range_in_tableWidget(QTableWidget *tableWidget, QComboBox *comboBox_range, int i);
    QComboBox *get_combo_box_for_obj(QMap<QString,qreal> _dict);
    QSpinBox *get_spin_box_count(int max);
    bool check_on_empty_table(int _weapon_count);
    qreal get_P_detect();
};
#endif // MAINWINDOW_H
