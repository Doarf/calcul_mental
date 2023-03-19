#include "mainwindow.h"  

#include <QApplication>  

int main(int argc, char *argv[])  
{  
    // Initialisation de l'application Qt
    QApplication a(argc, argv);  
    MainWindow w;  
    // Afficher la fenêtre MainWindow
    w.show();  
    // Exécuter la boucle d'événements de l'application Qt
    return a.exec();  
}