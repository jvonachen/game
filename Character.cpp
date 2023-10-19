#include "Character.h"

using namespace std;

Character::Character() {} // just accept default values

Character::Character(float xp, float yp, float xsp, float ysp)
{
    x = xp;
    y = yp;
    xs = xsp;
    ys = ysp;
};

float Character::getX()
{
    return x;
}

float Character::getY()
{
    return y;
}

void Character::setX(float xp)
{
    x = xp;
}

void Character::setY(float yp)
{
    y = yp;
}

float Character::getXS()
{
    return xs;
}

float Character::getYS()
{
    return ys;
}

void Character::setXS(float xsp)
{
    xs = xsp;
}

void Character::setYS(float ysp)
{
    ys = ysp;
}
