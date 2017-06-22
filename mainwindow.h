#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "diagramscene.h"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updateButtonClicked();
signals:
    void setSizeRectangle(qreal w, qreal h);

private:
    DiagramScene *scene;
    QGraphicsView *view;

    QPushButton *btnUpdate;
    QLineEdit *txtWidht;
    QLineEdit *txtHeight;

};

#endif // MAINWINDOW_H
