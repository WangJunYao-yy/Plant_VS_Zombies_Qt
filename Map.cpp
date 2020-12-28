#include "Map.h"
#include<iostream>

using namespace std;

Map::Map() {
    map = new int* [5];
    for (int i = 0; i <5; i++) {
        map[i] = new int[9];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 9; j++) {
            map[i][j] = 0;
        }
    }
}

int** Map::get_map() {
    if (Map::cur_map == NULL)
        cur_map = new Map();
    return map;
}

Map* Map::cur_map = NULL;
int** Map::map = NULL;

void Map::map_clear() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 9; j++) {
            map[i][j] = 0;
        }
    }
}

void Map::change_map(int x, int y, int item) {
    if (item == 0) {
        for (int i = 7 * y; i < 7 * y + 7; i++) {
            map[i][x * 6] = 0;
            map[i][x * 6 + 5] = 0;
            map[i][x * 6 + 1] = 0;
            map[i][x * 6 + 2] = 0;
            map[i][x * 6 + 3] = 0;
            map[i][x * 6 + 4] = 0;
        }
        map[7 * y][x * 6] = 1;
        map[7 * y + 6][x * 6] = 1;
        map[7 * y + 6][x * 6 + 5] = 1;
        map[7 * y][x * 6 + 5] = 1;
    }
    else if (item == 1) {
        map[7 * y][x * 6] = 1;
        map[7 * y + 6][x * 6] = 1;
        map[7 * y + 6][x * 6 + 5] = 1;
        map[7 * y][x * 6 + 5] = 1;
    }
    else if (item == 2) {
        map[7 * y][x * 6] = 2;
        map[7 * y + 6][x * 6] = 2;
        map[7 * y + 6][x * 6 + 5] = 2;
        map[7 * y][x * 6 + 5] = 2;
    }
    else if (item == 3) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 3;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 4) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 4;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 5) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 5;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 6) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 6;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 7) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 7;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 8) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 8;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 9) {
        //map[7 * y][x * 6] = 1;
        //map[7 * y + 6][x * 6] = 1;
        //map[7 * y + 6][x * 6 + 5] = 1;
        //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 9;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 10) {
    //map[7 * y][x * 6] = 1;
    //map[7 * y + 6][x * 6] = 1;
    //map[7 * y + 6][x * 6 + 5] = 1;
    //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 10;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 11) {
    //map[7 * y][x * 6] = 1;
    //map[7 * y + 6][x * 6] = 1;
    //map[7 * y + 6][x * 6 + 5] = 1;
    //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 5][x * 6 + 1] = 11;
        map[7 * y + 5][x * 6 + 2] = -1;
        map[7 * y + 5][x * 6 + 3] = -1;
        map[7 * y + 5][x * 6 + 4] = -1;
    }
    else if (item == 12) {
    //map[7 * y][x * 6] = 1;
    //map[7 * y + 6][x * 6] = 1;
    //map[7 * y + 6][x * 6 + 5] = 1;
    //map[7 * y][x * 6 + 5] = 1;

        map[7 * y + 3][x * 6 + 1] = 12;
        map[7 * y + 3][x * 6 + 2] = -1;
        map[7 * y + 3][x * 6 + 3] = -1;
        map[7 * y + 3][x * 6 + 4] = -1;
    }
    else if (item < 0 && item != -1) {
        map[7 * y + 4][x * 6 + 1] = -item;
        map[7 * y + 4][x * 6 + 2] = -1;
        map[7 * y + 4][x * 6 + 3] = -1;
        map[7 * y + 4][x * 6 + 4] = -1;
    }
    else if (item == 13) {

        map[7 * y][x * 6 + 1] = 13;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 14) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 14;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 15) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 15;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 16) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 16;
    }
    else if (item == 21) {
        map[7 * y][x * 6 + 1] = 21;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 22) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 22;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 23) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 23;
        map[7 * y][x * 6 + 4] = 0;
    }
    else if (item == 24) {
        map[7 * y][x * 6 + 1] = 0;
        map[7 * y][x * 6 + 2] = 0;
        map[7 * y][x * 6 + 3] = 0;
        map[7 * y][x * 6 + 4] = 24;
    }
    else if (item == 31) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 31;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 31;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 31;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else if (item == 32) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 32;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 32;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 32;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else if (item == 33) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 33;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 33;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 33;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else if (item == 34) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 34;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 34;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 34;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else if (item == 35) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 35;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 35;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 35;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else if (item == 36) {
        if (map[7 * y + 5][x * 6 + 1] != 0) {
            if (map[7 * y + 3][x * 6 + 1] != 0) {
                map[7 * y + 1][x * 6 + 1] = 36;
                map[7 * y + 1][x * 6 + 2] = -1;
                map[7 * y + 1][x * 6 + 3] = -1;
                map[7 * y + 1][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 3][x * 6 + 1] = 36;
                map[7 * y + 3][x * 6 + 2] = -1;
                map[7 * y + 3][x * 6 + 3] = -1;
                map[7 * y + 3][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 5][x * 6 + 1] = 36;
            map[7 * y + 5][x * 6 + 2] = -1;
            map[7 * y + 5][x * 6 + 3] = -1;
            map[7 * y + 5][x * 6 + 4] = -1;
        }
    }
    else {
        if (map[7 * y + 6][x * 6 + 1] != 0) {
            if (map[7 * y + 4][x * 6 + 1] != 0) {
                map[7 * y + 2][x * 6 + 1] = item;
                map[7 * y + 2][x * 6 + 2] = -1;
                map[7 * y + 2][x * 6 + 3] = -1;
                map[7 * y + 2][x * 6 + 4] = -1;
            }
            else {
                map[7 * y + 4][x * 6 + 1] = item;
                map[7 * y + 4][x * 6 + 2] = -1;
                map[7 * y + 4][x * 6 + 3] = -1;
                map[7 * y + 4][x * 6 + 4] = -1;
            }
        }
        else {
            map[7 * y + 6][x * 6 + 1] = item;
            map[7 * y + 6][x * 6 + 2] = -1;
            map[7 * y + 6][x * 6 + 3] = -1;
            map[7 * y + 6][x * 6 + 4] = -1;
        }
    }
}

