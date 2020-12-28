#pragma once


class Map
{
private:
    static Map* cur_map;
    static int** map;
    Map();
public:

    static void change_map(int x, int y, int item);
    static int** get_map();
    static void map_clear();
};


