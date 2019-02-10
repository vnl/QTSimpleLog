#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnLogMsg()
{
    qDebug() << ui->textLogMessage->toPlainText();
}

void MainWindow::btnLogLns()
{
    for (int i = 0; i < 1000; i++)
        {
            QString line = randomStringGen();
            qDebug() << line;
        }
}

QString MainWindow::randomStringGen() const
{
    //src: https://stackoverflow.com/questions/18862963/qt-c-random-string-generation
       const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
       const int randomStringLength = 200;

       QString randomString;
       for(int i=0; i<randomStringLength; ++i)
       {
           int index = qrand() % possibleCharacters.length();
           QChar nextChar = possibleCharacters.at(index);
           randomString.append(nextChar);
       }
       return randomString;
}
