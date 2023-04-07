#ifndef CMATH_H
#define CMATH_H

#include <QMainWindow>
#include <QObject>
#include <QMap>
#include <QWidget>

enum RangeCamouflage {
    VISUAL,
    INFRARED,
    RL
};

class cmath : public QMainWindow
{
    Q_OBJECT
public:
    QMap<RangeCamouflage, QString> range_dict;
    cmath();

private:
    QMap<RangeCamouflage, QString> get_range_dict();
};

#endif // CMATH_H
