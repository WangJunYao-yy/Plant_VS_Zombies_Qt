#ifndef BEGINWIDGET_H
#define BEGINWIDGET_H

#include <QWidget>
#include<QPushButton>
#include <QLabel>

class beginWidget : public QWidget
{
    Q_OBJECT
public:
    explicit beginWidget(QWidget *parent = nullptr);
    void initial_Slots();
    void emit_leave_game();
    void emit_start_game();
signals:
    void leave_game();
    void start_game();
private:
    QPushButton begin_game;
    QPushButton quit_game;
    QLabel begin_graph_label;
};

#endif // BEGINWIDGET_H
