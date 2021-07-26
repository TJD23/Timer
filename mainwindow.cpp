#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //this->setWindowFlags( Qt::Dialog | Qt::WindowTitleHint );





 ui->setupUi(this);
flag = false;



    qtimer = new QTimer(this);
    qtimer2 = new QTimer(this);


    connect(qtimer, SIGNAL(timeout()), this, SLOT(update()));
    connect(qtimer2, SIGNAL(timeout()), this, SLOT(flash()));

    qtimer->start(1000);
    qtimer2->start(500);




    start = time(NULL);





}

MainWindow::~MainWindow()
{
    delete qtimer;
    delete qtimer2;
    delete ui;
}



void MainWindow::paintEvent(QPaintEvent *)
{
	QCoreApplication::processEvents();
    current = time(NULL);

    double seconds = difftime(current, start);
    QString elapsed = QDateTime::fromSecsSinceEpoch(seconds).toUTC().toString("hh:mm:ss");
    ui->lbl_clock->setText(elapsed);

    QString totaltime = ui->comboBox->currentText();

    if ((QString::compare(totaltime, elapsed) <= 0) && flag == false)
    {    


        ui->lbl_clock->setStyleSheet("QLabel { color : red }");
            flag = true;
            Alarm();
           

    }


}


void MainWindow::flash()
{
    if (flag == true) ui->lbl_clock->setVisible(!ui->lbl_clock->isVisible());
	QCoreApplication::processEvents();

}

void MainWindow::on_pushButton_clicked()
{
    
    flag = false;
    start = time(NULL);
    ui->lbl_clock->setStyleSheet("QLabel { color : black }");
     ui->lbl_clock->setVisible(true);
     Alarm();

}
void MainWindow::Alarm(void)
{

try {

  

    }
    catch (...)
    {
        return;

    }



    
}
