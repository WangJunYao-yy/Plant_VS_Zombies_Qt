#pragma once

#include <QGraphicsItem>

class Plant : public QGraphicsItem
{
    Q_OBJECT
public:
    Plant();
    Plant(QString name_, const int life_, const int attack_, const int cd_, const int price_, int x_, int y_);
    Plant(const Plant* orig);
    QString get_name();
    int get_attack();
    int get_life();
    int get_price();
    int get_loc_x();
    int get_loc_y();
    void attacked(int x);
    void dead();
    void place_plant(int x_,int y_);
    bool contorl_cd();
    int attack_zombie();

signals:

private:
    QString name;
    int attack;
    int life;
    int x;
    int y;
    int price;
    int cd;
    int cur_cd;

};


class Sunflower :public Plant {
private:

public:
    Sunflower(int x_, int y_): Plant("Sunflower", 300, 0, 40, 80, x_, y_) {}
};

class Peashooter : public Plant {
private:

public:
    Peashooter(int x_, int y_) :Plant("Peashooter", 300, 20, 6, 100, x_, y_) {}
};

class Repeater :public Plant {
private:

public:
    Repeater(int x_, int y_) :Plant("Repeater", 300, 20, 3, 200, x_, y_) {}
};

class SnowPea :public Plant {
private:

public:
    SnowPea(int x_, int y_): Plant("SnowPea", 300, 20, 6, 175, x_, y_) {}
};

class Wall_nut :public Plant {
private:

public:
    Wall_nut(int x_, int y_):Plant("Wall_nut", 4000, 0, 0, 50, x_, y_) {}
};

class Tall_nut :public Plant {
private:

public:
    Tall_nut(int x_, int y_) : Plant("Tall_nut", 8000, 0, 0, 125, x_, y_) {}
};

class Squash :public Plant {
private:

public:
    Squash(int x_, int y_) : Plant("Squash", 300, 1800, 0, 50, x_, y_) {}

};

class Cherry_Bomb :public Plant {
private:

public:
    Cherry_Bomb(int x_, int y_) : Plant("Cherry_Bomb", 300, 1800, 0, 150, x_, y_) {}
};

class Garlic :public Plant {
private:

public:
    Garlic(int x_, int y_) : Plant("Garlic", 400, 0, 0, 50, x_, y_){}

};

class Pumpkin :public Plant {
private:

public:
    Pumpkin(int x_, int y_) : Plant("Pumpkin", 4000, 0, 0, 125, x_, y_) {}
};



class plant_personality {
private:

    QString name;

    int canBuy;//不可买-0 可买-1 选中-2
    int price;
    int cd;
    int cur_cd;
public:
    plant_personality(QString name_, int cd_, int cur_cd_, int price_);
    bool judge();

    bool chosen();
    void change_back();
    void bought();
    bool judge_d;
    void control_cd();
    int get_price();
};

