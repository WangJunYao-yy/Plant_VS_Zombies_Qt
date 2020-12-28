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
<<<<<<< HEAD
    static void map_clear_half();

=======
>>>>>>> 0a81602012b0f8705b6fe739315f5ee92c5b5985
};


