#include <iostream>
#include <conio.h>
#include "display.h"
#include "graphics.h"
#include "laby.h"
#include "robot.h"

#define SPACEBAR 32

#define KEY_UP 122

#define KEY_DOWN 115

#define KEY_LEFT 113

#define KEY_RIGHT 100

#define KEY_BACKSPACE 8

int main()
{
    opengraphsize(410,415);

    display disp{};
    robot rob{2,2};
    laby *lb= new laby{20,20};
    lb->init();
    setcolor(WHITE);
    disp.drawScreen(lb,rob);

    int c=0;

    while(true)
    {
        switch((c=getch()))
        {
            case KEY_UP:
            rob.up();
            if(!rob.isInside(lb))
            {
                rob.down();
            }
            break;

            case KEY_DOWN:
            rob.down();
            if(!rob.isInside(lb))
            {
                rob.up();
            }
            break;

            case KEY_LEFT:
            rob.left();
            if(!rob.isInside(lb))
            {
                rob.right();
            }
            break;

            case KEY_RIGHT:
            rob.right();
            if(!rob.isInside(lb))
            {
                rob.left();
            }
            break;

            case SPACEBAR:
            rob.putBlock(lb);
            break;

            case KEY_BACKSPACE:
            rob.takeBlock(lb);
            break;
        }

        setcolor(WHITE);
        disp.drawScreen(lb,rob);

    }

    closegraph();

    return 0;

}
