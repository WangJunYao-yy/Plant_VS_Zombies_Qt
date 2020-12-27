#include "beginwidget.h"
#include<QDesktopWidget>
#include "qpixmap.h"

beginWidget::beginWidget(QWidget *parent) : QWidget(parent)
{
    QDesktopWidget w;
    int deskWidth = w.availableGeometry().width();
    int deskHeight = w.availableGeometry().height();
    this->setFixedSize(900,600);
    move ((deskWidth - this->width())/2,(deskHeight - this->height())/2);
    begin_graph_label.setParent(this);
    begin_graph_label.setPixmap(QPixmap(":/images/graph/Logo.jpg"));

    begin_game.setParent(this);
    quit_game.setParent(this);
    begin_game.setText("Start Game");
    quit_game.setText("Exit");
    begin_game.setFixedSize(200,60);
    quit_game.setFixedSize(200,60);
    begin_game.move(350,420);
    quit_game.move(350,520);

    QFont font;
    font.setPointSize(14);
    font.setBold(true);

    begin_game.setStyleSheet("border-image: url(:/images/graph/Button.png);");
    quit_game.setStyleSheet("border-image: url(:/images/graph/Button.png);");
    begin_game.setFont(font);
    quit_game.setFont(font);

    //begin_game.setStyleSheet("color : white");
    //quit_game.setStyleSheet("color : white");

    connect(&quit_game, &QPushButton::clicked, this, &beginWidget::emit_leave_game);
    connect(&begin_game, &QPushButton::clicked, this, &beginWidget::emit_start_game);

}

void beginWidget::emit_leave_game(){
    emit leave_game();
}

void beginWidget::emit_start_game(){
    emit start_game();
}
