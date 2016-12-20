#ifndef SCREENSHOTWINDOW_H
#define SCREENSHOTWINDOW_H

#include <QDialog>
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>
#include <QLabel>
#include <QPaintEvent>
#include <QPainter>
#include <QPropertyAnimation>
#include <QPushButton>

namespace Ui {
class screenshotWindow;
}

class screenshotWindow : public QDialog
{
    Q_OBJECT

public:
    explicit screenshotWindow(QWidget *parent = 0);
    ~screenshotWindow();

public slots:
    void show();

private slots:
    void on_discardButton_clicked();

    void on_copyButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::screenshotWindow *ui;

    QPixmap screenshotPixmap;

    void paintEvent(QPaintEvent* event);
};

#endif // SCREENSHOTWINDOW_H
