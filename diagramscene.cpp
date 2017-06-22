#include "diagramscene.h"
#include <QDebug>
DiagramScene::DiagramScene(QObject *parent)
    : QGraphicsScene(parent)
{
    diagramItem = new DiagramItem();

    addItem(diagramItem);

}

void DiagramScene::setSizeRectangle(qreal w, qreal h)
{
    diagramItem->setSize(w,h);
    QRectF area(0,0,0,0);
    update(area);
}
