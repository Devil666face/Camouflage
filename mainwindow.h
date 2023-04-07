#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QComboBox>
#include <QDebug>
#include "cmath.h"

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

    void on_comboBox_visual_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    cmath* math;

    //Locals
    int weapon_count = 0;

    void resize_table(QTableWidget *tableWidget);
    void update_table(QTableWidget *tableWidget, QMap<RangeCamouflage, QString> _range_dict);
    QComboBox *get_combo_box_camouflage_range(QMap<RangeCamouflage, QString> _range_dict);
    void set_combo_box_range_in_tableWidget(QTableWidget *tableWidget, QComboBox *comboBox_range, int i);
};
#endif // MAINWINDOW_H
