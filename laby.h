#ifndef LABY_H
#define LABY_H

#include <vector>
#include <fstream>
#include <iostream>

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
		bool saveLab(const std::string& fichier)const;
		bool chargeLab(const std::string & fichier);
    private:
        int d_height;
        int d_width;
        std::vector<std::vector<int> > d_map;
};

#endif // LABY_H
