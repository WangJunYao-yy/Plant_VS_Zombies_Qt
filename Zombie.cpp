/*#define _CRT_SECURE_NO_WARNINGS

#include"Zombie.h"
#include<iostream>
using namespace std;

int Zombie::get_life() {
    return (life + first_blood);
}

int Zombie::get_attack() {
    return attack;
}


Zombie::Zombie(string name_, int life_, int attack_, int cd_, int loc_y_, int eat_cd_, int attack_cd_, int can_attack_, int first_blood_, int eat_, int Is_jump_) {
    name = name_;
    life = life_;
    attack = attack_;
    eat = eat_;
    cd = cd_;
    cur_cd = cd;
    loc_y = loc_y_;
    loc_x = 7;
    tmp_cd = 0;
    tmp_cd_last = 0;
    eat_cd = eat_cd_;
    cur_eat_cd = eat_cd;
    tmp_eat_cd = 0;
    attack_cd = attack_cd_;
    cur_attack_cd = attack_cd;
    tmp_attack_cd = 0;
    can_attack = can_attack_;
    first_blood = first_blood_;
    if (can_attack != 0) {
        attack_num = 3;
    }
    Is_jump = Is_jump_;
}

bool Zombie::Is_gameover() {
    if (this->loc_x <= -1)return true;
    else return false;
}

int Zombie::get_loc_x() {
    return this->loc_x;
}

int Zombie::get_loc_y() {
    return this->loc_y;
}





//TODO
void Zombie::move() {
    if (tmp_cd_last != 0) {
        if (cur_cd == 0) {
            this->loc_x--;
            cur_cd = tmp_cd;
            tmp_cd_last--;
        }
        else {
            cur_cd--;
        }
    }
    else {
        if (cur_cd == 0) {
            this->loc_x--;
            cur_cd = cd;
        }
        else {
            cur_cd--;
        }
    }
}

void Zombie::driven() {
    if (loc_y == 0) {
        loc_y++;
    }
    else {
        loc_y--;
    }
}


int Zombie::eat_plant() {
    if (tmp_cd_last != 0) {
        if (cur_eat_cd == 0) {
            //this->loc_x--;
            cur_eat_cd = tmp_eat_cd;
            tmp_cd_last--;
            return eat;
        }
        else {
            cur_eat_cd--;
            return 0;
        }
    }
    else {
        if (cur_eat_cd == 0) {
            //this->loc_x--;
            cur_eat_cd = eat_cd;
            return eat;
        }
        else {
            cur_eat_cd--;
            return 0;
        }
    }
}

int Zombie::attack_plant() {
    if (attack_num == 0) {
        return 0;
    }
    else {
        if (cur_attack_cd == 0) {
            cur_attack_cd = attack_cd;
            attack_num--;
            return attack;
        }
        else {
            cur_attack_cd--;
            return 0;
        }
    }
}

void Zombie::attacked(int x) {
    if (first_blood <= 0) {
        life -= x;
    }
    else {
        first_blood -= x;
        if (first_blood <= 0 && cd == 30) {
            cd = 20;
            //cur_cd = cd;
            eat_cd = 7;
        }
    }
}

void Zombie::slow_down() {
    tmp_cd = 50;
    tmp_cd_last += 3;
}

void Zombie::jump() {
    loc_x -= 2;
    Is_jump = 0;
    cd += 15;
}


string Zombie::get_name() {
    return  name;
}

Basic_Zombie::Basic_Zombie(int loc_y) :Zombie("Basic_Zombie", 280, 0, 30, loc_y, 20, 0, 0, 0, 100, 0) {

}

Conehead_Zombie::Conehead_Zombie(int loc_y) : Zombie("Conehead_Zombie", 640, 0, 30, loc_y, 20, 0, 0, 0, 100, 0) {

}

Newspaper_Zombie::Newspaper_Zombie(int loc_y) : Zombie("Newspaper_Zombie", 280, 0, 30, loc_y, 20, 0, 0, 140, 100, 0) {

}

Pole_Vaulting_Zombie::Pole_Vaulting_Zombie(int loc_y) : Zombie("Pole_Vaulting_Zombie", 500, 0, 30, loc_y, 20, 0, 0, 0, 100, 1) {

}

Joker_Zombie::Joker_Zombie(int loc_y) : Zombie("Joker_Zombie", 400, 10000, 30, loc_y, 20, 0, 1, 0, 100, 0) {

}

Basketball_Zombie::Basketball_Zombie(int loc_y) : Zombie("Basketball_Zombie", 600, 10000, 30, loc_y, 10, 10, 1, 0, 100, 0) {

}
*/
