#include"catalogoCompleto.h"

catalogoCompleto::catalogoCompleto(QWidget* p):
    QWidget(p),
    listaCatalogo(new elementoWidget(this)),
    modifica(new QPushButton(this)),
    rimuovi(new QPushButton(this))
{
    QVBoxLayout* vistaCatalogo = new QVBoxLayout(this);
    QHBoxLayout* bottoni = new QHBoxLayout();

    listaCatalogo->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    listaCatalogo->QAbstractScrollArea::setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    modifica->setText("Modifica");
    rimuovi->setText("Rimuovi");

    bottoni->addWidget(modifica);
    bottoni->addWidget(rimuovi);

    vistaCatalogo->addWidget(listaCatalogo);
    vistaCatalogo->addLayout(bottoni);
}

elementoWidget* catalogoCompleto::getLista() const {
    return listaCatalogo;
}

QPushButton* catalogoCompleto::getModifica() const {
    return modifica;
}

QPushButton* catalogoCompleto::getRimuovi() const {
    return rimuovi;
}
