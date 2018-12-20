#ifndef DISPLAY_H
#define DISPLAY_H

#include "robot.h"
#include "laby.h"

class display
{
    public:
        display();
        void placeBlock(const coordinates& crd) const;
        void placeLaby(const laby* lb) const;
        void placeRobot(const robot& rob) const;
        void drawScreen(const laby* lb, const robot& rob);

    private:

};

#endif // DISPLAY_H
