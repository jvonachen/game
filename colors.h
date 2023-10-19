#pragma once

#include <string>
#include <array>

using namespace std;

struct Color
{
    string name;
    short colorId;
    short red;
    short green;
    short blue;
};

array<Color, 256> colors = {{{"black", 0, 0, 0, 0},
		   {"dark grey 8", 1, 50, 50, 50},
		   {"dark grey 7", 2, 100, 100, 100},
		   {"dark grey 6", 3, 150, 150, 150},
		   {"dark grey 5", 4, 200, 200, 200},
		   {"dark grey 4", 5, 250, 250, 250},
		   {"dark grey 3", 6, 300, 300, 300},
		   {"dark grey 2", 7, 350, 350, 350},
		   {"dark grey 1", 8, 400, 400, 400},
		   {"dark grey 0", 9, 450, 450, 450},

		   {"grey", 10, 500, 500, 500},

		   {"light grey 0", 11, 555, 555, 555},
		   {"light grey 1", 12, 611, 611, 611},
		   {"light grey 2", 13, 666, 666, 666},
		   {"light grey 3", 14, 722, 722, 722},
		   {"light grey 4", 15, 777, 777, 777},
		   {"light grey 5", 16, 833, 833, 833},
		   {"light grey 6", 17, 888, 888, 888},
		   {"light grey 7", 18, 944, 944, 944},

		   {"white", 19, 999, 999, 999},

		   {"light red 7", 20, 999, 888, 888},
		   {"light red 6", 21, 999, 777, 777},
		   {"light red 5", 22, 999, 666, 666},
		   {"light red 4", 23, 999, 555, 555},
		   {"light red 3", 24, 999, 444, 444},
		   {"light red 2", 25, 999, 333, 333},
		   {"light red 1", 26, 999, 222, 222},
		   {"light red 0", 27, 999, 111, 111},

		   {"red", 28, 999, 0, 0},

		   {"dark red 0", 29, 900, 0, 0},
		   {"dark red 1", 30, 800, 0, 0},
		   {"dark red 2", 31, 700, 0, 0},
		   {"dark red 3", 32, 600, 0, 0},
		   {"dark red 4", 33, 500, 0, 0},
		   {"dark red 5", 34, 400, 0, 0},
		   {"dark red 6", 35, 300, 0, 0},
		   {"dark red 7", 36, 200, 0, 0},
		   {"dark red 8", 37, 100, 0, 0},

		   {"black", 38, 0, 0, 0},

		   {"dark green 8", 39, 0, 100, 0},
		   {"dark green 7", 40, 0, 200, 0},
		   {"dark green 6", 41, 0, 300, 0},
		   {"dark green 5", 42, 0, 400, 0},
		   {"dark green 4", 43, 0, 500, 0},
		   {"dark green 3", 44, 0, 600, 0},
		   {"dark green 2", 45, 0, 700, 0},
		   {"dark green 1", 46, 0, 800, 0},
		   {"dark green 0", 47, 0, 900, 0},

		   {"green", 48, 0, 999, 0},

		   {"light green 0", 49, 111, 999, 111},
		   {"light green 1", 50, 222, 999, 222},
		   {"light green 2", 51, 333, 999, 333},
		   {"light green 3", 52, 444, 999, 444},
		   {"light green 4", 53, 555, 999, 555},
		   {"light green 5", 54, 666, 999, 666},
		   {"light green 6", 55, 777, 999, 777},
		   {"light green 7", 56, 888, 999, 888},

		   {"white", 57, 999, 999, 999},

		   {"light blue 7", 58, 888, 888, 999},
		   {"light blue 6", 59, 777, 777, 999},
		   {"light blue 5", 60, 666, 666, 999},
		   {"light blue 4", 61, 555, 555, 999},
		   {"light blue 3", 62, 444, 444, 999},
		   {"light blue 2", 63, 333, 333, 999},
		   {"light blue 1", 64, 222, 222, 999},
		   {"light blue 0", 65, 111, 111, 999},

		   {"blue", 66, 0, 0, 999},

		   {"dark blue 0", 67, 0, 0, 900},
		   {"dark blue 1", 68, 0, 0, 800},
		   {"dark blue 2", 69, 0, 0, 700},
		   {"dark blue 3", 70, 0, 0, 600},
		   {"dark blue 4", 71, 0, 0, 500},
		   {"dark blue 5", 72, 0, 0, 400},
		   {"dark blue 6", 73, 0, 0, 300},
		   {"dark blue 7", 74, 0, 0, 200},
		   {"dark blue 8", 75, 0, 0, 100},

		   {"black", 76, 0, 0, 0},

		   {"dark yellow 8", 77, 100, 100, 0},
		   {"dark yellow 7", 78, 200, 200, 0},
		   {"dark yellow 6", 79, 300, 300, 0},
		   {"dark yellow 5", 80, 400, 400, 0},
		   {"dark yellow 4", 81, 500, 500, 0},
		   {"dark yellow 3", 82, 600, 600, 0},
		   {"dark yellow 2", 83, 700, 700, 0},
		   {"dark yellow 1", 84, 800, 800, 0},
		   {"dark yellow 0", 85, 900, 900, 0},

		   {"yellow", 86, 999, 999, 0},

		   {"light yellow 0", 87, 999, 999, 111},
		   {"light yellow 1", 88, 999, 999, 222},
		   {"light yellow 2", 89, 999, 999, 333},
		   {"light yellow 3", 90, 999, 999, 444},
		   {"light yellow 4", 91, 999, 999, 555},
		   {"light yellow 5", 92, 999, 999, 666},
		   {"light yellow 6", 93, 999, 999, 777},
		   {"light yellow 7", 94, 999, 999, 888},

		   {"white", 95, 999, 999, 999},

		   {"light magenta 7", 96, 999, 888, 999},
		   {"light magenta 6", 97, 999, 777, 999},
		   {"light magenta 5", 98, 999, 666, 999},
		   {"light magenta 4", 99, 999, 555, 999},
		   {"light magenta 3", 100, 999, 444, 999},
		   {"light magenta 2", 101, 999, 333, 999},
		   {"light magenta 1", 102, 999, 222, 999},
		   {"light magenta 0", 103, 999, 111, 999},

		   {"magenta", 104, 999, 0, 999},

		   {"dark magenta 0", 105, 875, 0, 875},
		   {"dark magenta 1", 106, 875, 0, 875},
		   {"dark magenta 2", 107, 875, 0, 875},
		   {"dark magenta 3", 108, 750, 0, 750},
		   {"dark magenta 4", 109, 625, 0, 625},
		   {"dark magenta 5", 110, 500, 0, 500},
		   {"dark magenta 6", 111, 375, 0, 375},
		   {"dark magenta 7", 112, 250, 0, 250},
		   {"dark magenta 8", 113, 125, 0, 125},

		   {"black", 114, 0, 0, 0},

		   {"dark cyan 8", 115, 0, 100, 100},
		   {"dark cyan 7", 116, 0, 200, 200},
		   {"dark cyan 6", 117, 0, 300, 300},
		   {"dark cyan 5", 118, 0, 400, 400},
		   {"dark cyan 4", 119, 0, 500, 500},
		   {"dark cyan 3", 120, 0, 600, 600},
		   {"dark cyan 2", 121, 0, 700, 700},
		   {"dark cyan 1", 122, 0, 800, 800},
		   {"dark cyan 0", 123, 0, 900, 900},

		   {"cyan", 124, 0, 999, 999},

		   {"light cyan 0", 125, 111, 999, 999},
		   {"light cyan 1", 126, 222, 999, 999},
		   {"light cyan 2", 127, 333, 999, 999},
		   {"light cyan 3", 128, 444, 999, 999},
		   {"light cyan 4", 129, 555, 999, 999},
		   {"light cyan 5", 130, 666, 999, 999},
		   {"light cyan 6", 131, 777, 999, 999},
		   {"light cyan 7", 132, 888, 999, 999},

		   {"white", 133, 999, 999, 999},

		   {"light orange 7", 134, 999, 944, 888},
		   {"light orange 6", 135, 999, 888, 777},
		   {"light orange 5", 136, 999, 833, 666},
		   {"light orange 4", 137, 999, 777, 555},
		   {"light orange 3", 138, 999, 722, 444},
		   {"light orange 2", 139, 999, 666, 333},
		   {"light orange 1", 140, 999, 611, 222},
		   {"light orange 0", 141, 999, 555, 111},

		   {"orange", 142, 999, 500, 0},

		   {"brown 0", 143, 900, 450, 0},
		   {"brown 1", 144, 800, 400, 0},
		   {"brown 2", 145, 700, 350, 0},
		   {"brown 3", 146, 600, 300, 0},
		   {"brown 4", 147, 500, 250, 0},
		   {"brown 5", 148, 400, 200, 0},
		   {"brown 6", 149, 300, 150, 0},
		   {"brown 7", 150, 200, 100, 0},
		   {"brown 8", 151, 100, 50, 0},

		   {"black", 152, 0, 0, 0},

		   {"dark fuchsia 8", 153, 100, 0, 50},
		   {"dark fuchsia 7", 154, 200, 0, 100},
		   {"dark fuchsia 6", 155, 300, 0, 150},
		   {"dark fuchsia 5", 156, 400, 0, 200},
		   {"dark fuchsia 4", 157, 500, 0, 250},
		   {"dark fuchsia 3", 158, 600, 0, 300},
		   {"dark fuchsia 2", 159, 700, 0, 350},
		   {"dark fuchsia 1", 160, 800, 0, 400},
		   {"dark fuchsia 0", 161, 900, 0, 450},

		   {"fuchsia", 162, 999, 0, 500},

		   {"light fuchsia 0", 163, 999, 111, 555},
		   {"light fuchsia 1", 164, 999, 222, 611},
		   {"light fuchsia 2", 165, 999, 333, 666},
		   {"light fuchsia 3", 166, 999, 444, 722},
		   {"light fuchsia 4", 167, 999, 555, 777},
		   {"light fuchsia 5", 168, 999, 666, 833},
		   {"light fuchsia 6", 169, 999, 777, 888},
		   {"light fuchsia 7", 170, 999, 888, 944},

		   {"white", 171, 999, 999, 999},

		   {"light blue green 7", 172, 888, 999, 944},
		   {"light blue green 6", 173, 777, 999, 888},
		   {"light blue green 5", 174, 666, 999, 833},
		   {"light blue green 4", 175, 555, 999, 777},
		   {"light blue green 3", 176, 444, 999, 722},
		   {"light blue green 2", 177, 333, 999, 666},
		   {"light blue green 1", 178, 222, 999, 611},
		   {"light blue green 0", 179, 111, 999, 555},

		   {"blue green", 180, 0, 999, 500},

		   {"dark blue green 0", 181, 0, 900, 450},
		   {"dark blue green 1", 182, 0, 800, 400},
		   {"dark blue green 2", 183, 0, 700, 350},
		   {"dark blue green 3", 184, 0, 600, 300},
		   {"dark blue green 4", 185, 0, 500, 250},
		   {"dark blue green 5", 186, 0, 400, 200},
		   {"dark blue green 6", 187, 0, 300, 150},
		   {"dark blue green 7", 188, 0, 200, 100},
		   {"dark blue green 8", 189, 0, 100, 50},

		   {"black", 190, 0, 0, 0},

		   {"dark yellow green 8", 191, 50, 100, 0},
		   {"dark yellow green 7", 192, 100, 200, 0},
		   {"dark yellow green 6", 193, 150, 300, 0},
		   {"dark yellow green 5", 194, 200, 400, 0},
		   {"dark yellow green 4", 195, 250, 500, 0},
		   {"dark yellow green 3", 196, 300, 600, 0},
		   {"dark yellow green 2", 197, 350, 700, 0},
		   {"dark yellow green 1", 198, 400, 800, 0},
		   {"dark yellow green 0", 199, 450, 900, 0},

		   {"yellow green", 200, 500, 999, 0},

		   {"light yellow green 0", 201, 555, 999, 111},
		   {"light yellow green 1", 202, 611, 999, 222},
		   {"light yellow green 2", 203, 666, 999, 333},
		   {"light yellow green 3", 204, 722, 999, 444},
		   {"light yellow green 4", 205, 777, 999, 555},
		   {"light yellow green 5", 206, 833, 999, 666},
		   {"light yellow green 6", 207, 888, 999, 777},
		   {"light yellow green 7", 208, 944, 999, 888},

		   {"white", 209, 999, 999, 999},

		   {"light aqua 7", 210, 888, 944, 999},
		   {"light aqua 6", 211, 777, 888, 999},
		   {"light aqua 5", 212, 666, 833, 999},
		   {"light aqua 4", 213, 555, 777, 999},
		   {"light aqua 3", 214, 444, 722, 999},
		   {"light aqua 2", 215, 333, 666, 999},
		   {"light aqua 1", 216, 222, 611, 999},
		   {"light aqua 0", 217, 111, 555, 999},

		   {"aqua", 218, 0, 500, 999},

		   {"dark aqua 0", 219, 0, 450, 900},
		   {"dark aqua 1", 220, 0, 400, 800},
		   {"dark aqua 2", 221, 0, 350, 700},
		   {"dark aqua 3", 222, 0, 300, 600},
		   {"dark aqua 4", 223, 0, 250, 500},
		   {"dark aqua 5", 224, 0, 200, 400},
		   {"dark aqua 6", 225, 0, 150, 300},
		   {"dark aqua 7", 226, 0, 100, 200},
		   {"dark aqua 8", 227, 0, 50, 100},

		   {"black", 228, 0, 0, 0},

		   {"dark purple 8", 229, 50, 0, 100},
		   {"dark purple 7", 230, 100, 0, 200},
		   {"dark purple 6", 231, 150, 0, 300},
		   {"dark purple 5", 232, 200, 0, 400},
		   {"dark purple 4", 233, 250, 0, 500},
		   {"dark purple 3", 234, 300, 0, 600},
		   {"dark purple 2", 235, 350, 0, 700},
		   {"dark purple 1", 236, 400, 0, 800},
		   {"dark purple 0", 237, 450, 0, 900},

		   {"purple", 238, 500, 0, 999},

		   {"light purple 0", 239, 555, 111, 999},
		   {"light purple 1", 240, 611, 222, 999},
		   {"light purple 2", 241, 666, 333, 999},
		   {"light purple 3", 242, 722, 444, 999},
		   {"light purple 4", 243, 777, 555, 999},
		   {"light purple 5", 244, 833, 666, 999},
		   {"light purple 6", 245, 888, 777, 999},
		   {"light purple 7", 246, 944, 888, 999},

		   {"white", 247, 999, 999, 999},

		   {"light grey", 248, 888, 888, 888},
		   {"light grey", 249, 777, 777, 777},
		   {"light grey", 250, 666, 666, 666},
		   {"light grey", 251, 555, 555, 555},
		   {"dark grey", 252, 444, 444, 444},
		   {"dark grey", 253, 333, 333, 333},
		   {"dark grey", 254, 222, 222, 222},
		   {"dark grey", 255, 111, 111, 111}}};

void setupColors() 
{
    for (short i{0}; i < colors.size(); ++i)
    {
        Color *c = &colors[i];
        if (init_color(c->colorId, c->red, c->green, c->blue) == ERR)
        {
            cout << "init_color errored\n\r";
        }
    }
}
