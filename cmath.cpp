#include "cmath.h"

//QList<qreal> cmath::get_koef_from_tableWidget(QTableWidget *&tableWidget)
qreal cmath::get_koef_from_tableWidget(QTableWidget *&tableWidget)
{
    qreal result_koef = 0.0;
    QList<QString> _current_range_list = get_current_range_list(tableWidget);
    variant = case_variant(_current_range_list);
    qDebug()<<_current_range_list;
    for (int i=0;i<_current_range_list.size();i++) {
        qreal koef = get_coef_for_range(tableWidget, _current_range_list[i], i);
        result_koef+=koef;
    }
//    if (result_koef>1) result_koef=1;
    return result_koef;
}

QString cmath::get_value_from_cell_widget(QWidget *widget)
{
    if (QComboBox* comboBox = qobject_cast<QComboBox*>(widget)) {
        return comboBox->currentText();
    }
}

qreal cmath::get_local_koef(QComboBox *&comboBox)
{
    int i=comboBox->currentIndex();
    QList<qreal> _local_koef_list;
    _local_koef_list<<0.64<<0.38<<0.16<<0.70<<0.25<<0.37;
    return _local_koef_list[i];
}

qreal cmath::get_weather_koef(QComboBox *&comboBox)
{
    int i=comboBox->currentIndex();
    QList<qreal> _local_koef_list;
    _local_koef_list<<0.2<<0.1<<0.05<<0.01<<0.001;
    return _local_koef_list[i];
}

qreal cmath::get_fog_koef(QCheckBox *&checkBox)
{
    if (checkBox->isChecked()) {
        return 0.1;
    }
    return 0.0;
}

qreal cmath::get_P_for_variant(int variant, QComboBox *&comoBox_obj)
{
    int i = comoBox_obj->currentIndex();
    QList<QList<qreal>> P_list;
    QList<qreal> zrk_list;
    QList<qreal> zrpk_list;
    QList<qreal> am_list;
    QList<qreal> kp_list;
    QList<qreal> zradn_list;
    QList<qreal> zrdn_list;
    zrk_list<<0.43<<0.44<<0.41<<0.41<<0.44<<0.43<<0.21;
    zrpk_list<<0.39<<0.41<<0.43<<0.43<<0.41<<0.39<<0.22;
    am_list<<0.28<<0.27<<0.25<<0.25<<0.27<<0.28<<0.15;
    kp_list<<0.51<<0.43<<0.37<<0.37<<0.43<<0.51<<0.25;
    zradn_list<<0.49<<0.51<<0.48<<0.48<<0.51<<0.49<<0.21;
    zrdn_list<<0.49<<0.51<<0.48<<0.48<<0.51<<0.49<<0.21;
    P_list<<zrk_list<<zrpk_list<<am_list<<kp_list<<zradn_list<<zrdn_list;
    return 1-P_list[i][variant-1];
}

cmath::cmath()
{
    range_dict = get_range_dict();
    RangeCamouflageVisual = get_range_camouflage_Visual();
    RangeCamouflageInfrared = get_range_camouflage_Infrared();
    RangeCamouflageRl = get_range_camouflage_Rl();
}

QMap<RangeCamouflage, QString> cmath::get_range_dict()
{
    QMap<RangeCamouflage, QString> _range_dict;
    _range_dict[VISUAL] = "Оптический";
    _range_dict[INFRARED] = "Инфракрасный";
    _range_dict[RL] = "Радиолокационный";
    return _range_dict;
}

QMap<QString, qreal> cmath::get_range_camouflage_Visual()
{
    QMap <QString, qreal> _RangeCamouflageVisual;
    _RangeCamouflageVisual["Применение маскировочного покрытия табельного или изготовленного из подручных материалов (П=15...20%)"] = 0.1;
    _RangeCamouflageVisual["Применение маскировочного окрашивания"] = 0.2;
    _RangeCamouflageVisual["Применение маскировочного окрашивания техники и сооружений или масок (П=50%)"] = 0.3;
    _RangeCamouflageVisual["Применение масок, комплектов (П=60%) или маски (П=30%)"] = 0.4;
    _RangeCamouflageVisual["Применение масок, комплектов (П=70%) или маски (П=50%) в сочетании с маскировочным окрашиванием"] = 0.5;
    _RangeCamouflageVisual["Применение масок, комплектов (П=80...90%) или маски (П=70%) в сочетании с маскировочным окрашиванием"] = 0.6;
    _RangeCamouflageVisual["Применение масок, комплектов (П=80%) в сочетании с маскировочным окрашиванием, применение средств аэрозольного противодействия с 2-3 кратным перекрытием площади объекта"] = 0.8;
    _RangeCamouflageVisual["Применение масок, комплектов (П=90%) в сочетании с маскировочным окрашиванием"] = 0.9;
    _RangeCamouflageVisual["Размещение техники под плотными навесами или в укрытиях арочного типа (П=100%)"] = 1.0;
    return _RangeCamouflageVisual;
}

QMap<QString, qreal> cmath::get_range_camouflage_Infrared()
{
    QMap <QString, qreal> _RangeCamouflageInfrared;
    _RangeCamouflageInfrared["Применение теплоизоляционных материалов и маскирующих пенных покрытий в сочетании с улучшением условий охлаждения (вентиляции) аппаратных кабин"] = 0.5;
    _RangeCamouflageInfrared["Применение теплоизоляционных материалов и маскирующих пенных покрытий в сочетании с улучшением условий охлаждения (вентиляции) агегатов питания"] = 0.65;
    _RangeCamouflageInfrared["Установление козырьков из теплоизоляционных материалов, перекрывающих выпускные отверстия в направлении ИК приемника вентиляционных решеток и радиаторов"] = 0.6;
    _RangeCamouflageInfrared["Установление козырьков из теплоизоляционных материалов, перекрывающих выпускные отверстия в направлении ИК приемника агрегатов электропитания"] = 0.4;
    _RangeCamouflageInfrared["Установление козырьков из теплоизоляционных материалов, перекрывающих выпускные отверстия в направлении ИК приемника газотурбинных двигателей"] = 0.2;
    return _RangeCamouflageInfrared;
}

QMap<QString, qreal> cmath::get_range_camouflage_Rl()
{
    QMap <QString, qreal> _RangeCamouflageRl;
    _RangeCamouflageRl["Применения радиопоглощающих материалов и радиорассеивающих масок типа Накидка"] = 0.02;
    _RangeCamouflageRl["Применения радиопоглощающих материалов и радиорассеивающих масок типа МКТ-2Л"] = 0.045;
    _RangeCamouflageRl["Применения радиопоглощающих материалов и радиорассеивающих масок типа МКТ- 5Л,4Л; РПЧ"] = 0.058;
    _RangeCamouflageRl["Применения радиопоглощающих материалов и радиорассеивающих масок МРПК-1Л"] = 0.063;
    return _RangeCamouflageRl;
}

QList<QString> cmath::get_current_range_list(QTableWidget *&tableWidget)
{
    QList<QString> _current_range_list;
    for (int i=0;i<tableWidget->rowCount();i++) {
        QString range = get_value_from_cell_widget(tableWidget->cellWidget(i,0));
        _current_range_list.append(range);
    }
    return _current_range_list;
}

qreal cmath::get_coef_for_range(QTableWidget *&tableWidget, QString key, int i)
{
    QMap <QString, qreal> koef_dict = get_dict_for_range_key(key);
    QString value_for_range = get_value_from_cell_widget(tableWidget->cellWidget(i,1));
    return koef_dict.value(value_for_range);
}

QMap<QString, qreal> cmath::get_dict_for_range_key(QString key)
{
    if (key=="Оптический") {
        return RangeCamouflageVisual;
    }
    else if (key=="Инфракрасный") {
        return RangeCamouflageInfrared;
    }
    else if (key=="Радиолокационный") {
        return RangeCamouflageRl;
    }
}

int cmath::case_variant(QList<QString> _current_range_list)
{
    QSet <QString> _set = _current_range_list.toSet();
    if ((_set.contains("Оптический")) && (_set.contains("Радиолокационный")) && (_set.contains("Инфракрасный"))) {
        return 7;
    }
    else if  ((_set.contains("Радиолокационный")) && (_set.contains("Инфракрасный"))) {
        return 6;
    }
    else if  ((_set.contains("Оптический")) && (_set.contains("Радиолокационный"))) {
        return 5;
    }
    else if  ((_set.contains("Оптический")) && (_set.contains("Инфракрасный"))) {
        return 4;
    }
    else if  (_set.contains("Радиолокационный")) {
        return 3;
    }
    else if  (_set.contains("Инфракрасный")) {
        return 2;
    }
    else {
        return 1;
    }

}
