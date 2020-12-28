#include<iostream>
#include<vector>
#include<Windows.h>
#include <iomanip>

#include <QTime>
#include <QCoreApplication>

#include"play.h"
#include"Plant.h"
#include"Bullet.h"
#include"Map.h"
#include"Zombie.h"

using namespace std;


long long int count_zombie = 0;
int score = 0;
int sunshine = 225;
bool gameover = 0;
int sunshine_cd = 50;
int zombie_cd = 60;



int set[8][3] = { 0 };

vector<Plant>plant;
vector<Bullet>bullet;
vector<Zombie>zombie;

/*plant_personality judge_plant[10] = {
    plant_personality("Sunflower", 25, 0, 50),
    plant_personality("Peashooter", 25, 0, 100),
    plant_personality("Repeater", 25, 0, 200),
    plant_personality("SnowPea", 25, 0, 175),
    plant_personality("Wall_nut", 90, 0, 50),
    plant_personality("Tall_nut", 90, 0, 125),
    plant_personality("Squash", 90, 0, 50),
    plant_personality("Cherry_Bomb", 110, 0, 150),
    plant_personality("Garlic", 25, 0, 50),
    plant_personality("Pumpkin", 60, 0, 125)
};*/

void display_play_ui() {
    int** map = Map::get_map();

}


void Do_everything() {
    if (sunshine_cd != 0) {
            sunshine_cd--;
    }
    else {
        sunshine += 25;
        sunshine_cd = 50;
    }
    /*for (int i = 0; i < 10; i++) {
        judge_plant[i].control_cd();
    }*/

    /*for (int i = 0; i < plant.size(); i++) {//遍历所有植物，进行攻击/生成阳光等，以及打印植物
        if (plant[i].get_life() <= 0) {
            if (plant[i].get_name() != "南瓜头") {
                set[plant[i].get_loc_x()][plant[i].get_loc_y()] = 0;
            }
            else {
                int j = 0;
                for (; j < plant.size(); j++) {
                    if (plant[j].get_loc_x() == plant[i].get_loc_x() && plant[j].get_loc_y() == plant[i].get_loc_y() && plant[i].get_name() != "南瓜头") {
                        set[plant[i].get_loc_x()][plant[i].get_loc_y()] = 1;
                    }
                }
                if (j == plant.size()) {
                    set[plant[i].get_loc_x()][plant[i].get_loc_y()] = 0;
                }
            }
            plant.erase(plant.begin() + i, plant.begin() + i + 1);
            i--;
            continue;
        }

        if (plant[i].get_name() == "向日葵") {
            sunshine += plant[i].generate_sunshine();
        }
        else if (plant[i].get_name() == "豌豆射手") {
            Bullet tmp(plant[i].attack_zombie());
            if (tmp.get_loc_x() != -1) {
                bullet.push_back(tmp);
            }

        }
        else if (plant[i].get_name() == "双发射手") {
            Bullet tmp(plant[i].attack_zombie());
            if (tmp.get_loc_x() != -1) {
                bullet.push_back(tmp);
            }
        }
            else if (plant[i].get_name() == "寒冰射手") {
                Bullet tmp(plant[i].attack_zombie());
                if (tmp.get_loc_x() != -1) {
                    bullet.push_back(tmp);
                }
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), 6);
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), plant[i].get_life());
            }
            else if (plant[i].get_name() == "窝瓜") {
                Bullet tmp(plant[i].attack_zombie());
                if (tmp.get_loc_x() != -1) {
                    bullet.push_back(tmp);
                }
                plant.erase(plant.begin() + i, plant.begin() + i + 1);
                i--;
                continue;
            }
            else if (plant[i].get_name() == "樱桃炸弹") {
                Bullet tmp(plant[i].attack_zombie());
                if (tmp.get_loc_x() != -1) {
                    bullet.push_back(tmp);
                }
                plant.erase(plant.begin() + i, plant.begin() + i + 1);
                i--;
                continue;
            }
            else if (plant[i].get_name() == "坚果墙") {
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), 7);
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), plant[i].get_life());
            }
            else if (plant[i].get_name() == "坚果墙") {
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), 8);
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), plant[i].get_life());
            }
            else if (plant[i].get_name() == "大蒜") {
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), 11);
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), plant[i].get_life());
            }
            else if (plant[i].get_name() == "南瓜头") {
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), 12);
                Map::change_map(plant[i].get_loc_x(), plant[i].get_loc_y(), (-1) * plant[i].get_life());
            }
        }*/
}
