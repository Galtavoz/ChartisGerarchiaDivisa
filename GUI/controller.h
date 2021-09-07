#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<QWidget>
#include<QVBoxLayout>
#include<QMessageBox>
#include<QFileDialog>
#include<QScrollBar>
#include<QDesktopWidget>
#include<QGuiApplication>
#include<QApplication>
#include<QScreen>
#include<QTextDocument>
#include<QPixmap>
#include<QIcon>

#include"modello.h"
#include"GUI/popup.h"
#include"GUI/menu.h"
#include"GUI/catalogoCompleto.h"
#include"GUI/ricerca.h"
#include"GUI/inserisci.h"
#include"GUI/modifica.h"

class Controller: public QWidget {
    Q_OBJECT
private:
    QWidget* parent;
    Modello* modello;
    Menu* menu;
    Ricerca* ricerca;
    Inserisci* inserisci;
    catalogoCompleto* catCompleto;
    QString file;
    Modifica* layoutModifica;
public:
    Controller(Modello*, QWidget* = nullptr);
    ~Controller();
    void caricaDati();
    void caricaDatiXML();
    Modello* getModello() const;
    void disabilita();
    void abilita();


    bool controlloDoppione(prodotto*) const;

public slots:
        void esci();
        void carica();
        void tornaHome();
        void vediRicerca();
        void vediInserisci();
        void vediInfoSviluppatore();
        void vediInfoCatalogo();
        void ricercaProdotti();
        void inserisciNuovoProdotto();
        void modifica();
        void modificaRicerca();
        void salvaModifiche();
        void rimuoviProdotto();
        void rimuoviProdottoRicerca();
};
#endif // CONTROLLER_H
