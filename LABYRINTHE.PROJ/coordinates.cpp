#include "coordinates.h"

coordinates::coordinates(): d_x{0}, d_y{0}
{
    //ctor
}

coordinates::coordinates(int x, int y): d_x{x}, d_y{y}
{

}

int coordinates::x() const
{
    return d_x;
}

int coordinates::y() const
{
    return d_y;
}

void coordinates::changeX(int x)
{
    d_x=x;
}

void coordinates::changeY(int y)
{
    d_y=y;
}

void coordinates::incX()
{
    d_x++;
}

void coordinates::decX()
{
    d_x--;
}

void coordinates::incY()
{
    d_y++;
}

void coordinates::decY()
{
    d_y--;
}
