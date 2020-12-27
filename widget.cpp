#include "widget.h"
#include "ui_widget.h"
#include "qpixmap.h"
#include<QDesktopWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Plants_VS_Zombies");

    field.move(0 ,150);
    field.setParent(this);
    field.setPixmap(QPixmap(":/images/graph/background1.jpg"));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 9; j++){
            fields[i][j].setParent(this);
            fields[i][j].move(80 * j + 250, 100 * i + 230);
            fields[i][j].setFixedSize(80, 100);
            fields[i][j].setFlat(true);
        }
    }

    {
        plant_images[0].setPixmap(QPixmap(":/images/graph/SunFlower.gif"));
        plant_images[1].setPixmap(QPixmap(":/images/graph/Peashooter.gif"));
        plant_images[2].setPixmap(QPixmap(":/images/graph/Repeater.gif"));
        plant_images[3].setPixmap(QPixmap(":/images/graph/SnowPea.gif"));
        plant_images[4].setPixmap(QPixmap(":/images/graph/WallNut.gif"));
        plant_images[5].setPixmap(QPixmap(":/images/graph/TallNut.gif"));
        plant_images[6].setPixmap(QPixmap(":/images/graph/Squash.gif"));
        plant_images[7].setPixmap(QPixmap(":/images/graph/CherryBomb.gif"));
        plant_images[8].setPixmap(QPixmap(":/images/graph/Garlic.gif"));
        plant_images[9].setPixmap(QPixmap(":/images/graph/PumpkinHead.gif"));

    }

    for(int i = 0; i < 10; i++){
        plant_images[i].setParent(this);
        plant_cards[i].setParent(this);

        plant_images[i].raise();

        plant_images[i].move(80 * i + 150, 20);
        plant_cards[i].move(80 * i + 150, 20);

        plant_cards[i].setFixedSize(80, 100);
        plant_cards[i].setStyleSheet("border-image: url(:/images/graph/SeedChooser_Background.png);");
        plant_cards[i].setFlat(true);
    }


    sunshine_display.setParent(this);
    sunshine_display.move(20,20);
    sunshine_display.setPixmap(QPixmap(":/images/graph/SunBack.png"));

    sunshine_number.setParent(this);
    sunshine_number.move(80,30);
    sunshine_number.setText("100");

    QDesktopWidget w;
    int deskWidth = w.availableGeometry().width();
    int deskHeight = w.availableGeometry().height();
    this->setFixedSize(1200,750);
    move ((deskWidth - this->width())/2,(deskHeight - this->height())/2);


    //begin_surface.setParent(this);
    begin_surface.show();
    this->hide();

    connect(&begin_surface, &beginWidget::leave_game, this, &Widget::deal_leave_game);
    connect(&begin_surface, &beginWidget::start_game, this, &Widget::deal_start_game);
    connect(&pause_surface, &pauseWidget::leave_game, this, &Widget::deal_leave_game);
    connect(&pause_surface, &pauseWidget::continue_game, this, &Widget::deal_start_game);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::deal_leave_game(){
    begin_surface.close();
    pause_surface.close();
    this->close();
}

void Widget::deal_start_game(){
    begin_surface.close();
    pause_surface.close();
    this->show();
}

void Widget::on_pause_button_clicked()
{
    this->hide();
    pause_surface.show();
}
