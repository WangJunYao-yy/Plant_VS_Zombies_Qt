#pragma once

#include<iostream>

using namespace std;

class Bullet {
private:
    string name;
    int attack;
    int x;
    int y;
    int loc;
    int cd;
    int cur_cd;
    int slow;
    int slow_cd;
public:
    int expension;
    int get_attack();
    int get_loc_x();
    int get_loc_y();
    int get_loc();
    string get_name();
    bool control_cd();
    void change_loc();
    Bullet(int cd_, int attack_, int x_, int y_, string name_, int slow_, int slow_cd_, int exp_);
    Bullet(Bullet* orig);
};

class oridBullet :public Bullet {
private:
public:
    oridBullet(int x_, int y_);
};

class IceBullet :public Bullet {
private:
public:
    IceBullet(int x_, int y_);
};

class Bomb :public Bullet {
private:
public:
    Bomb(int x_, int y_, int exp);
    void bomb();
};

