#include "laby.h"

const int WALL=1;
const int GROUND=0;

laby::laby(int height, int width):d_height{height}, d_width{width}
{
    d_map.resize(height);
    for(int i=0;i<height;i++)
    {
        d_map[i].resize(width);
    }
}

void laby::init()
{
    for(int y=0;y<d_height;y++)
    {
        for(int x=0;x<d_width;x++)
        {
            d_map[y][x]=0;
        }
    }
}

int laby::getPosXY(int x, int y) const
{
    return d_map[y][x];
}

int laby::getHeight() const
{
    return d_height;
}

int laby::getWidth() const
{
    return d_width;
}

void laby::placeBlock(int x, int y)
{
    d_map[y][x]=WALL;
}

void laby::removeBlock(int x, int y)
{
    d_map[y][x]=GROUND;
}

bool laby::saveLab(const std::string & fichier) const
{
	std::ofstream os(fichier);
	if (!os)
	{
		std::cerr << "Erreur ouverture fichier" << std::endl;
		return false;
	}
	os << d_height << std::endl;
	os << d_width << std::endl;
	for (int y = 0; y < d_height; y++)
	{
		for (int x = 0; x < d_width; x++)
		{
			os << d_map[y][x] << " ";
		}
		os<<std::endl;
	}
	os.close();
	return true;
}

bool laby::chargeLab(const std::string & fichier) 
{
	std::ifstream is(fichier);
	if (!is)
	{
		std::cerr << "Erreur ouverture fichier" << std::endl;
		return false;
	}
	is >> d_height;
	is >> d_width;
	for (int y = 0; y < d_height; y++)
	{
		for (int x = 0; x < d_width; x++)
		{
			is >>d_map[y][x] ;
		}
	}
	is.close();
	return true;
}

