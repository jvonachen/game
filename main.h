#pragma once

#include <chrono>
#include <array>
#include <cstdlib>
#include <iostream>

#include <ncurses.h>
#include <time.h>
#include <math.h>

#include "colors.h"
#include "colorPairs.h"
#include "Character.h"
#include "Tile.h"
#include "PerlinNoise.h"

using namespace std;
using namespace std::chrono;

const int MAX_TILE_DIM = 1000;
const int CHARACTERS = 1;
typedef array<array<Tile, MAX_TILE_DIM>, MAX_TILE_DIM> TileMap;