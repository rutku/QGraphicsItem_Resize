#include "diagramitem.h"
#include <QDebug>
DiagramItem::DiagramItem(QGraphicsItem *parent)
    :QGraphicsItem(parent)
{
    _width = 200;
    _height = 200;
    this->setAcceptHoverEvents(true);
}

QRectF DiagramItem::boundingRect() const
{

    return QRectF(0,0,_width,_height);
}

void DiagramItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)

    QPointF topLeft(20,20);
    QPointF bottomRight(_width,_height);

    QRectF rect (topLeft,bottomRight);
    painter->drawRoundRect(rect,5,5);
}
