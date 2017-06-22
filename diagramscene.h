#ifndef DIAGRAMSCENE_H
#define DIAGRAMSCENE_H

#include "diagramitem.h"

#include <QGraphicsScene>


class DiagramScene : public QGraphicsScene
{
    Q_OBJECT

public:
    DiagramScene(QObject *parent = 0);

public slots:
    void setSizeRectangle(qreal w, qreal h);

private:
    DiagramItem *diagramItem;

};

#endif // DIAGRAMSCENE_H
