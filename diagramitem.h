#ifndef DIAGRAMITEM_H
#define DIAGRAMITEM_H

#include <QGraphicsItem>
#include <QPainter>

class DiagramItem : public QGraphicsItem
{

public:
    DiagramItem(QGraphicsItem *parent = nullptr);
    void setSize(qreal width, qreal height) { _width = width; _height = height; }

private:
    virtual QRectF boundingRect() const override;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    QRectF bound;
    qreal _width;
    qreal _height;

};

#endif // DIAGRAMITEM_H
