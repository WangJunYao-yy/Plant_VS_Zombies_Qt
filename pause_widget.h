#ifndef PAUSE_WIDGET_H
#define PAUSE_WIDGET_H

#include <QWidget>
#include<QPushButton>
#include <QLabel>

class pauseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit pauseWidget(QWidget *parent = nullptr);
    void initial_Slots();
    void emit_leave_game();
    void emit_continue_game();
signals:
    void leave_game();
    void continue_game();
private:
    QPushButton continue_game_button;
    QPushButton quit_game_button;
    QLabel pause_graph_label;
};


#endif // PAUSE_WIDGET_H
