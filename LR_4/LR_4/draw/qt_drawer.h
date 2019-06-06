#ifndef LAB4_QTDRAWER_H
#define LAB4_QTDRAWER_H

#include <QPainter>
#include <cmath>
#include "base_drawer.h"

namespace draw
{

class QtDrawer: public BaseDrawer
{
public:
    explicit QtDrawer(QPainter *painter);
    void drawLine(const Point &p1, const Point &p2) override;
private:
    QPainter *_painter;
};

}

#endif //LAB4_QTDRAWER_H
