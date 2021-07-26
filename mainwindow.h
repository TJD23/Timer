#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>
#include <QPointer>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    time_t start, current;
    QTimer *qtimer, *qtimer2;

signals:
    void playmp3();
    void stopmp3();
   



private slots:
    void on_pushButton_clicked();
     void flash (void);

private:
    Ui::MainWindow *ui;
    bool flag;
    void Alarm(void);
    



protected:
    void paintEvent(QPaintEvent *event) override;

};

#endif // MAINWINDOW_H
