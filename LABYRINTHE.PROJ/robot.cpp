#include "robot.h"

robot::robot(): d_coord{0,0}
{
    //ctor
}

robot::robot(int x, int y): d_coord{x,y}
{
    //ctor
}

coordinates robot::getCoord()const
{
    return d_coord;
}

void robot::up()
{
    d_coord.decX();
}

void robot::down()
{
    d_coord.incX();
}

void robot::left()
{
    d_coord.decY();
}

void robot::right()
{
    d_coord.incY();
}

bool robot::isInside(const laby* lb) const
{
    return (d_coord.x()<lb->getWidth()&&d_coord.x()>=0)&&(d_coord.y()<lb->getHeight()&&d_coord.y()>=0);
}

void robot::putBlock(laby* lb) const
{
    lb->placeBlock(d_coord.y(),d_coord.x());
}

void robot::takeBlock(laby* lb) const
{
    lb->removeBlock(d_coord.y(),d_coord.x());
}
