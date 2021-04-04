#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/ELCOT/Downloads/SHAREit/on.jpg"));
        ui->pushButton->setCheckable(true);
        QAction *a1=new QAction;
        QAction *a2=new QAction;
        QAction *a3=new QAction;
        a1->setText("First");
        a2->setText("Second");
        a3->setText("Third");
        QMenu *menu=new QMenu;
        menu->addAction(a1);
        menu->addAction(a2);
        menu->addAction(a3);
        ui->pushButton_6->setMenu(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Subha.S_2122180104160","THIS IS INFORMATION BOX");

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Subha.S_2122180104160","Do you like apples?",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
       {
            QMessageBox::information(this,"Subha.S_2122180104160","Yes");
       }
       else
       {
            QMessageBox::information(this,"Subha.S_2122180104160","No");
       }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
      reply=QMessageBox::question(this,"Subha.S_2122180104160","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
      if(reply==QMessageBox::No)
      {
          qDebug() <<"Nothing is displayed";
      }
      else
      {
          QMessageBox::warning(this,"Subha.S_212218104160","Dont display the message with warning as YesToAll");
      }
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox:: warning(this,"Subha.S_212218104160","This is a warning message");

}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
       {
           ui->pushButton->setIcon(QIcon("C:/Users/ELCOT/Downloads/SHAREit/on.jpg"));

           qDebug() <<"Button Checked --ON--";
       }
       else
       {
           ui->pushButton->setIcon(QIcon("C:/Users/ELCOT/Downloads/SHAREit/off.jpg"));

           qDebug() <<"Button Checked --OFF--";
       }
}
