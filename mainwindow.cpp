#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){


    //NAME
    qApp->setApplicationDisplayName("Animator Editor (GoatEngine)");

     ui->setupUi(this);

    //SetUp Editor Scene
    scene = new EditorScene();


}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    exitApp();
}


void MainWindow::exitApp(){

    //TODO Check if everything was saved
    //if not display dialog do you want to save
    // on yes open save dialog
    // on No exit
    // on cancel return
    qApp->exit(0);

}
