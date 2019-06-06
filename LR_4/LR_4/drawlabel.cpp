#include "drawlabel.h"


DrawLabel::DrawLabel(QPixmap &pixmap): _pixmap(&pixmap)
{
    this->setPixmap(pixmap);
}

void DrawLabel::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    painter.drawPixmap(QPoint(0, 0), *_pixmap);
    painter.end();
}
