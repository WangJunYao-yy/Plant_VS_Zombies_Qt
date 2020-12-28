#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "beginwidget.h"
#include "pause_widget.h"
#include <QLabel>
#include <QPushButton>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void deal_leave_game();
    void deal_start_game();
    //void deal_continue_game();
private slots:
    void on_pause_button_clicked();
    void onTimeOut();
private:
    Ui::Widget *ui;
    beginWidget begin_surface;
    pauseWidget pause_surface;
    QLabel field;
    QLabel sunshine_display;
    QLabel sunshine_number;
    QPushButton fields[5][9];
    QLabel plant_block_images;
    QPushButton plant_cards[10];
    QTimer timer;
};
#endif // WIDGET_H
