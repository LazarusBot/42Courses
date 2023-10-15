#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>

/*

Prereqs 1:
-basic knowledge of c++ (pointers and memory)
-very basic knowledge of qt

Prereqs 2:
-events (keyPressedEvent() and QKeyEvent)
-event propagation system
-QDebug

*/



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene for our game
    QGraphicsScene * scene = new QGraphicsScene();

    //create an item
    MyRect * item = new MyRect();
    item->setRect(0,0,100,100);

    //add to the scene
    scene->addItem(item);

    //add a view
    QGraphicsView * view = new QGraphicsView(scene);


    view->show();
    return a.exec();
}
