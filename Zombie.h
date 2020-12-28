#pragma once

#include<iostream>

using namespace std;



class Zombie {
private:
    string name;
    int life;
    int first_blood;
    int attack;
    int eat;
    int cd;
    int cur_cd;
    int tmp_cd;
    int attack_cd;
    int cur_attack_cd;
    int tmp_attack_cd;
    int eat_cd;
    int cur_eat_cd;
    int tmp_eat_cd;
    int tmp_cd_last;
    bool can_attack;
    int loc_x;
    int loc_y;
public:
    int attack_num;
    bool Is_jump;
    int get_life();
    int get_attack();
    int get_loc_x();
    int get_loc_y();
    void slow_down();
    bool Is_gameover();
    void move();
    void driven();
    int eat_plant();
    int attack_plant();
    void attacked(int x);
    void jump();
    string get_name();
    Zombie(string name_, int life_, int attack_, int cd_, int loc_y_, int eat_cd_, int attack_cd_, int can_attack_, int first_blood_, int eat_, int Is_jump_);
};

class Basic_Zombie :public Zombie {
private:

public:
    Basic_Zombie(int loc_y);
};

class Conehead_Zombie :public Zombie {
private:

public:
    Conehead_Zombie(int loc_y);
};

class Newspaper_Zombie :public Zombie {
private:

public:
    Newspaper_Zombie(int loc_y);
};

class Pole_Vaulting_Zombie : public Zombie {
private:

public:
    Pole_Vaulting_Zombie(int loc_y);
};

class Joker_Zombie : public Zombie {
private:

public:
    Joker_Zombie(int loc_y);
};

class Basketball_Zombie :public Zombie {
private:

public:
    Basketball_Zombie(int loc_y);
};

