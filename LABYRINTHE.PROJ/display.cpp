#include "display.h"
#include <iostream>
#include "graphics.h"

const int WALL=1;
const int GROUND=0;
const int STEP=20;

display::display()
{
    //ctor
}

void display::placeBlock(const coordinates& crd) const
{
    rectangle(crd.y()*STEP,crd.x()*STEP,(crd.y()+1)*STEP,(crd.x()+1)*STEP);
}

void display::placeLaby(const laby* lb) const
{
    for(int y=0;y<lb->getHeight();y++)
    {
        for(int x=0;x<lb->getWidth();x++)
        {
            if(lb->getPosXY(y,x)==WALL)
            {
                placeBlock(coordinates{x,y});
            }
        }
    }
}

void display::placeRobot(const robot& rob) const
{
    placeBlock(rob.getCoord());
}

void display::drawScreen(const laby* lb, const robot& rob)
{
    cleardevice();
    placeLaby(lb);
    placeRobot(rob);
}
