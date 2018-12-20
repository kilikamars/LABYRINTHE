#ifndef LABY_H
#define LABY_H

#include <vector>

class laby
{
    public:
        laby(int height, int width);
        void init();
        int getPosXY(int x, int y) const;
        int getHeight() const;
        int getWidth() const;
        void placeBlock(int x, int y);
        void removeBlock(int x, int y);

    private:
        int d_height;
        int d_width;
        std::vector<std::vector<int> > d_map;
};

#endif // LABY_H
