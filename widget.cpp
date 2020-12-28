#include "widget.h"
#include "ui_widget.h"
#include "qpixmap.h"
#include "play.h"
#include<QDesktopWidget>

extern int sunshine;

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

    plant_block_images.setParent(this);
    plant_block_images.move(150, 20);
    plant_block_images.setFixedSize(800, 100);
    plant_block_images.setPixmap(QPixmap(":/images/graph/plant_choice_block.jpg"));
    plant_block_images.raise();

    for(int i = 0; i < 10; i++){

        plant_cards[i].setParent(this);
        plant_cards[i].move(80 * i + 150, 20);

        plant_cards[i].setFixedSize(80, 100);
        //plant_cards[i].setStyleSheet("border-image: url(:/images/graph/SeedChooser_Background.png);");
        plant_cards[i].setFlat(true);
    }


    sunshine_display.setParent(this);
    sunshine_display.move(20,20);
    sunshine_display.setPixmap(QPixmap(":/images/graph/SunBack.png"));

    sunshine_number.setParent(this);
    sunshine_number.move(80,30);
    sunshine_number.setText(QString::number(sunshine));

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


    timer.setInterval(300);
    connect(&timer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    timer.start(300);
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
    timer.start(300);
}

void Widget::on_pause_button_clicked()
{
    this->hide();
    timer.stop();
    pause_surface.show();
}

void Widget::onTimeOut(){
    Do_everything();
    sunshine_number.setText(QString::number(sunshine));
}

