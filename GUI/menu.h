#ifndef MENU_H
#define MENU_H

#include<QMenuBar>
#include<QAction>
#include<QWidgetAction>
class Menu: public QMenuBar {
    Q_OBJECT
private:
    QWidget*   parent;
    QMenu*     file;
    QAction*   home;
    QAction*   carica;
    QAction*   salva;
    QAction*   esci;
    QAction*   inserisci;
    QAction*   ricerca;
    QMenu*     informazioni;
    QAction*   infoCatalogo;
    QAction*   infoSviluppatore;
public:
    Menu(QWidget* = nullptr);
    QAction* getInserisci() const;
    QAction* getRicerca() const;
    QAction* getHome() const;
    QAction* getSalva() const;
    QAction* getCarica() const;
    QAction* getEsci() const;
};
#endif // MENU_H
