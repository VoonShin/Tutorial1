#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include "MyRect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    //create an item to add to scene
    MyRect * rect = new MyRect();
    rect-> setRect(0,0,100,100);

    //add item to scene
    scene -> addItem(rect);

    //make rect focusable
    rect-> setFlag(QGraphicsItem::ItemIsFocusable);
    rect-> setFocus();

    //create a view visualize on screen
    QGraphicsView * view = new QGraphicsView(scene);

    view-> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //show the view
    view->show();

    return a.exec();
}
