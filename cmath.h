#ifndef CMATH_H
#define CMATH_H

#include <QMainWindow>
#include <QTableWidget>
#include <QComboBox>
#include <QObject>
#include <QMap>
#include <QDebug>
#include <QWidget>
#include <QCheckBox>
#include <QSpinBox>

enum RangeCamouflage {
    VISUAL,
    INFRARED,
    RL
};



class cmath : public QMainWindow
{
    Q_OBJECT
public:
    int variant = 0;
    QMap<RangeCamouflage, QString> range_dict;
    QMap <QString, qreal> RangeCamouflageVisual;
    QMap <QString, qreal> RangeCamouflageInfrared;
    QMap <QString, qreal> RangeCamouflageRl;
    qreal get_koef_from_tableWidget(QTableWidget *&tableWidget);
    QString get_value_from_cell_widget(QWidget *widget);
    qreal get_local_koef(QComboBox *&comboBox);
    qreal get_weather_koef(QComboBox *&comboBox);
    qreal get_fog_koef(QCheckBox *&checkBox);
    qreal get_P_for_variant(int variant, QComboBox *&comoBox_obj);
    cmath();

private:
    QMap<RangeCamouflage, QString> get_range_dict();
    QMap <QString, qreal> get_range_camouflage_Visual();
    QMap <QString, qreal> get_range_camouflage_Infrared();
    QMap <QString, qreal> get_range_camouflage_Rl();
    QList<QString> get_current_range_list(QTableWidget *&tableWidget);
    qreal get_coef_for_range(QTableWidget *&tableWidget, QString key, int i);
    int get_count_for_range(QTableWidget *&tableWidget, int i);
    QMap <QString, qreal> get_dict_for_range_key(QString key);
    int case_variant(QList<QString> _current_range_list);
};

#endif // CMATH_H
