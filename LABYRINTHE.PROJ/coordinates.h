#ifndef COORDINATES_H
#define COORDINATES_H


class coordinates
{
    public:
        coordinates();
        coordinates(int x, int y);
        int x() const;
        int y() const;
        void changeX(int x);
        void changeY(int y);
        void incX();
        void decX();
        void incY();
        void decY();

    private:
        int d_x;
        int d_y;
};

#endif // COORDINATES_H
