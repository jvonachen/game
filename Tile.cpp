#include "Tile.h"

using namespace std;

Tile::Tile() {}

Tile::Tile(float zp) {
    z = zp;
}

float Tile::getZ()
{
    return z;
}

void Tile::setZ(float zp)
{
    z = zp;
}
