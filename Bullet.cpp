/*#define _CRT_SECURE_NO_WARNNINGS

#include"Bullet.h"

using namespace std;

int Bullet::get_attack() {
    return attack;
}

int Bullet::get_loc_x() {
    return x;
}

int Bullet::get_loc_y() {
    return y;
}

int Bullet::get_loc() {
    return this->loc;
}

bool Bullet::control_cd() {
    if (cur_cd == 0) {
        cur_cd = cd;
        return true;
    }
    else {
        cur_cd--;
        return false;
    }
}

Bullet::Bullet(int cd_, int attack_, int x_, int y_, string name_, int slow_, int slow_cd_, int exp_) {
    attack = attack_;
    x = x_;
    y = y_;
    loc = 0;
    cd = cd_;
    cur_cd = cd;
    name = name_;
    slow = slow_;
    slow_cd = slow_cd_;
    expension = exp_;

}

Bullet::Bullet(Bullet* orig) {
    attack = orig->attack;
    x = orig->x;
    y = orig->y;
    loc = orig->loc;
    cd = orig->cd;
    cur_cd = cd;
    name = orig->name;
    slow = orig->slow;
    slow_cd = orig->slow_cd;
    expension = orig->expension;
}


void Bullet::change_loc() {
    if (this->control_cd()) {
        if (loc < 3) {
            loc++;
        }
        else {
            x++;
            loc = 0;
        }
    }
}

string Bullet::get_name() {
    return name;
}


oridBullet::oridBullet(int x_, int y_) :Bullet(2, 20, x_, y_, ">", 0, 0, 0) {

}

IceBullet::IceBullet(int x_, int y_) : Bullet(2, 20, x_, y_, "\033[34m>\033[0m", 60, 3, 0) {
}

Bomb::Bomb(int x_, int y_, int exp) : Bullet(0, 1500, x_, y_, "bomb", 0, 0, exp) {
}

void Bomb::bomb() {

}
*/
