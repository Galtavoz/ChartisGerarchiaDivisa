#include"menu.h"
Menu::Menu(QWidget* p):
    parent(p),
    file(new QMenu("File",p)),
    home(new QAction("Home",p)),
    carica(new QAction("Carica file",p)),
    salva(new QAction("Salva",p)),
    esci(new QAction("Esci",p)),
    inserisci(new QAction("Inserisci",p)),
    ricerca(new QAction("Ricerca",p)),
    informazioni(new QMenu("Informazioni",p)),
    infoCatalogo(new QAction("Informazioni Catalogo",p)),
    infoSviluppatore(new QAction("Informazioni Sviluppatore",p))
{

    addMenu(file);
    file->addAction(home);
    file->addAction(carica);
    file->addAction(salva);
    file->addAction(esci);

    addAction(inserisci);

    addAction(ricerca);

    addMenu(informazioni);
    informazioni->addAction(infoCatalogo);
    informazioni->addAction(infoSviluppatore);

    connect(infoCatalogo,SIGNAL(triggered()),parent,SLOT(vediInfoCatalogo()));
    connect(infoSviluppatore,SIGNAL(triggered()),parent,SLOT(vediInfoSviluppatore()));
}
QAction* Menu::getInserisci() const {
    return inserisci;
}
QAction* Menu::getRicerca() const {
    return ricerca;
}
QAction* Menu::getHome() const {
    return home;
}
QAction* Menu::getCarica() const {
    return carica;
}
QAction* Menu::getSalva() const {
    return salva;
}
QAction* Menu::getEsci() const {
    return esci;
}



