/*#include "Plant.h"

Plant::Plant() : QGraphicsItem(), attack(0), life(-1), x(-1), y(-1), price(0), cd(0)
{
    cur_cd = cd;
}

Plant::Plant(QString name_, const int life_, const int attack_, const int cd_, const int price_, int x_, int y_) : name(name_), attack(attack_), life(life_), x(x_), y(y_), price(price_), cd(cd_)
{
    cur_cd = cd;
}

Plant::Plant(const Plant* orig) : name(orig->name),attack(orig->attack), life(orig->life), price(orig->price), cd(orig->cd) {
    this->x = orig->x;
    this->y = orig->y;
    this->cur_cd = this->cd;
}

QString Plant::get_name() {
    return name;
}


int Plant::get_attack() {
    return this->attack;
}

int Plant::get_life() {
    return this->life;
}

void Plant::place_plant(int x_, int y_) {
    x = x_;
    y = y_;
}

int Plant::get_price() {
    return price;
}


int Plant::get_loc_x() {
    return x;
}

int Plant::get_loc_y() {
    return y;
}

void Plant::attacked(int x) {
    life -= x;
}

void Plant::dead() {}

bool Plant::contorl_cd() {
    if (cur_cd == 0) {
        cur_cd = cd;
        return true;
    }
    else {
        cur_cd--;
        return false;
    }
}



plant_personality::plant_personality(QString name_, int cd_, int cur_cd_, int price_) {
    name = name_;
    canBuy = 1;
    cd = cd_;
    cur_cd = cur_cd_;
    judge_d = 1;
    price = price_;
}


bool plant_personality::judge() {
    if (cur_cd == 0) {
        //cur_cd = cd;
        canBuy = 1;
        judge_d = true;
        return true;
    }
    else {
        canBuy = 0;
        cur_cd--;
        judge_d = false;
        return false;
    }
}


bool plant_personality::chosen() {
    if (judge_d) {
        canBuy = 2;
        return true;
    }
    else {
        return false;
    }
}

void plant_personality::change_back() {
    canBuy = 1;
}

void plant_personality::bought() {
    canBuy = 0;
    cur_cd = cd;
}

void plant_personality::control_cd() {
    if (cur_cd == 0 && judge_d == false) {
        //cur_cd = cd;
        canBuy = 1;
        judge_d = true;
    }
    else if (cur_cd != 0) {
        canBuy = 0;
        cur_cd--;
        judge_d = false;
    }
}

int plant_personality::get_price() {
    return price;
}
*/
