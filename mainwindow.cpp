#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    scene = new DiagramScene(this);
    view = new QGraphicsView(scene);
    btnUpdate = new QPushButton(tr("Update"));
    txtHeight = new QLineEdit;
    txtWidht = new QLineEdit;

    QVBoxLayout *mainLayout = new QVBoxLayout;
    QVBoxLayout *vLayout = new QVBoxLayout;
    QHBoxLayout *buttonLayout = new QHBoxLayout;

    vLayout->addWidget(view);
    buttonLayout->addWidget(txtHeight);
    buttonLayout->addWidget(txtWidht);
    buttonLayout->addWidget(btnUpdate);
    mainLayout->addLayout(vLayout);
    mainLayout->addLayout(buttonLayout);
    QWidget *widget = new QWidget;
    widget->setLayout(mainLayout);

    setCentralWidget(widget);
    setWindowTitle(tr("Rectangle Resize"));
    connect(btnUpdate,SIGNAL(clicked(bool)),this,SLOT(updateButtonClicked()));
    connect(this,SIGNAL(setSizeRectangle(qreal,qreal)),scene,SLOT(setSizeRectangle(qreal,qreal)));

    view->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view->show();

}

MainWindow::~MainWindow()
{
    delete scene;
    delete view;
    delete txtHeight;
    delete txtWidht;
    delete btnUpdate;
}

void MainWindow::updateButtonClicked()
{
    bool ok;
    qreal h = txtHeight->text().toInt(&ok);
    qreal w = txtWidht->text().toInt(&ok);
    emit setSizeRectangle(w,h);
}
