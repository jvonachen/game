class Character
{
    float x{0.0f};
    float y{1.0f};
    float xs{0.1f};
    float ys{0.1f};

public:
    Character();
    Character(float x, float y, float xs, float ys);

    float getX();
    float getY();
    void setX(float x);
    void setY(float y);

    float getXS();
    float getYS();
    void setXS(float xs);
    void setYS(float ys);
};
