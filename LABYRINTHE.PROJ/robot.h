#ifndef ROBOT_H
#define ROBOT_H

#include "coordinates.h"
#include "laby.h"

class robot
{
    public:
        robot();
        robot(int x, int y);
        coordinates getCoord()const;
        void up();
        void down();
        void left();
        void right();
        bool isInside(const laby* lb) const;
        void putBlock(laby* lb) const;
        void takeBlock(laby* lb) const;

    private:
        coordinates d_coord;
};

#endif // ROBOT_H
