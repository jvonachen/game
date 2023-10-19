#include "main.h"

int main(int argc, char **argv)
{
    int height, width, ch;
    srand(time(NULL));

    // make some characters
    array<Character, CHARACTERS> ac; // array of characters
    for (size_t i{0}; i < ac.size(); ++i)
    {
        ac[i] = Character(0.0f, 0.0f, 0.0f, 0.0f);
    }

    // make some tiles
    TileMap at; // array of tiles
    PerlinNoise pn;
    float NOISE_SCALAR = 70;
    double ZOOM = 0.005;
    for (size_t y{0}; y < MAX_TILE_DIM; ++y)
    {
        for (size_t x{0}; x < MAX_TILE_DIM; ++x)
        {
            Tile *thisTile = &at[y][x];
            thisTile->setZ((float)pn.noise((double)x * ZOOM, (double)y * ZOOM, (double)0.8 * ZOOM) * NOISE_SCALAR);
        }
    }

    // initialize ncurses stuff
    initscr();
    cbreak();
    noecho();              // mediate keyboard input
    nodelay(stdscr, true); // high twitch
    curs_set(0);           // make the curser invisible
    use_default_colors();
    keypad(stdscr, true);

    start_color();
    setupColors();
    setupColorPairs();

    uint64_t elapsedMS, nowMS, beforeMS = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    bool looping = true;
    int panY{1}, panX{0};
    do
    {
        // input
        ch = getch();
        switch (ch)
        {
        case 27:
            looping = false;
            break;
        case KEY_LEFT:
            ac[0].setX(ac[0].getX() - 1);
            break;
        case KEY_RIGHT:
            ac[0].setX(ac[0].getX() + 1);
            break;
        case KEY_UP:
            ac[0].setY(ac[0].getY() - 1);
            break;
        case KEY_DOWN:
            ac[0].setY(ac[0].getY() + 1);
            break;
        case 'a':
            panX--;
            break;
        case 'd':
            panX++;
            break;
        case 'w':
            panY--;
            break;
        case 's':
            panY++;
            break;
        case -1:
        default:
            break;
        }
        if (!looping)
            continue;

        getmaxyx(stdscr, height, width);
        nowMS = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        elapsedMS = nowMS - beforeMS;
        beforeMS = nowMS;

        // processing
        for (size_t i{0}; i < ac.size(); ++i)
        {
            Character *c = &ac[i];
            c->setY(c->getY() + c->getYS() * elapsedMS);
            if (c->getY() > height)
            {
                c->setY(height);
                c->setYS(-c->getYS());
            }
            if (c->getY() < 1.0f)
            { // leave the top for status stuff
                c->setY(1.0f);
                c->setYS(-c->getYS());
            }
            c->setX(c->getX() + c->getXS() * elapsedMS);
            if (c->getX() > width)
            {
                c->setX(width);
                c->setXS(-c->getXS());
            }
            if (c->getX() < 0.0f)
            {
                c->setX(0.0f);
                c->setXS(-c->getXS());
            }
        }

        // output
        erase(); // clear the screen buffer
        move(0, 0);
        // print status stuff at the top

        // show the tiles
        for (size_t y{1}; y < MAX_TILE_DIM; ++y)
        {
            if (y > height)
            {
                break;
            }
            for (size_t x{0}; x < MAX_TILE_DIM; ++x)
            {
                if (x > width)
                {
                    break;
                }
                float z = at[y + panY][x + panX].getZ();
                move((int)y, (int)x);
                changePair(z);
                addch(' ');
            }
        }

        // show the characters
        for (size_t i{0}; i < ac.size(); ++i)
        {
            Character c = ac[i];
            move(c.getY(), c.getX());
            changePair(1);
            addch('*');
        }

        refresh(); // paint the buffer
    } while (looping);

    endwin();
    return 0;
}
