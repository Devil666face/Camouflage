#include "cmath.h"

cmath::cmath()
{
    range_dict = get_range_dict();
}

QMap<RangeCamouflage, QString> cmath::get_range_dict()
{
    QMap<RangeCamouflage, QString> _range_dict;
    _range_dict[VISUAL] = "Оптический";
    _range_dict[INFRARED] = "Инфракрасный";
    _range_dict[RL] = "Радиолокационный";
    return _range_dict;
}
