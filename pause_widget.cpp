#include<QDesktopWidget>
#include "qpixmap.h"
#include"pause_widget.h"


pauseWidget::pauseWidget(QWidget *parent) : QWidget(parent)
{
    QDesktopWidget w;
    int deskWidth = w.availableGeometry().width();
    int deskHeight = w.availableGeometry().height();
    this->setFixedSize(465,554);
    move ((deskWidth - this->width())/2,(deskHeight - this->height())/2);
    pause_graph_label.setParent(this);
    pause_graph_label.setPixmap(QPixmap(":/images/graph/pause_background.png"));

    continue_game_button.setParent(this);
    quit_game_button.setParent(this);
    continue_game_button.setText("Continue Game");
    quit_game_button.setText("Exit Game");
    continue_game_button.setFixedSize(200,60);
    quit_game_button.setFixedSize(200,60);
    continue_game_button.move(150,320);
    quit_game_button.move(150,420);

    QFont font;
    font.setPointSize(14);
    font.setBold(true);

    continue_game_button.setStyleSheet("border-image: url(:/images/graph/Button.png);");
    quit_game_button.setStyleSheet("border-image: url(:/images/graph/Button.png);");
    continue_game_button.setFont(font);
    quit_game_button.setFont(font);

    connect(&quit_game_button, &QPushButton::clicked, this, &pauseWidget::emit_leave_game);
    connect(&continue_game_button, &QPushButton::clicked, this, &pauseWidget::emit_continue_game);

}



void pauseWidget::emit_leave_game(){
    emit leave_game();
}

void pauseWidget::emit_continue_game(){
    emit continue_game();
}
