#include"GUI/catalogoLista.h"

catalogoLista::catalogoLista(QWidget* p, prodotto* c): parent(p), prodotti(c) {
    aggiornaLista();
}

void catalogoLista::aggiornaLista() {
    QString path;
    if(dynamic_cast<biscotti*>(prodotti)) path=QString::fromStdString("./IMMAGINI/biscotti.png");
    if(dynamic_cast<cioccolata*>(prodotti)){
        if(dynamic_cast<cioccolata*>(prodotti)->getForma())path=QString::fromStdString("./IMMAGINI/cioccolata.png");
        else path=QString::fromStdString("./IMMAGINI/download.png");
    }
    if(dynamic_cast<infusi*>(prodotti)) path=QString::fromStdString("./IMMAGINI/infuso.png");
    if(dynamic_cast<bong*>(prodotti)){
        if(dynamic_cast<bong*>(prodotti)->getForma()) path=QString::fromStdString("./IMMAGINI/bongB.png");
        else path=QString::fromStdString("./IMMAGINI/bong.png");
    }
    if(dynamic_cast<vaporizzatore*>(prodotti)){
        if(dynamic_cast<vaporizzatore*>(prodotti)->getSchermo()) path=QString::fromStdString("./IMMAGINI/vapo.png");
        else path=QString::fromStdString("./IMMAGINI/vapoSS.png");
    }
    if(dynamic_cast<grinder*>(prodotti)) path=QString::fromStdString("./IMMAGINI/grinder.png");
    QPixmap p(path);
    setIcon(p.scaled(400,400,Qt::AspectRatioMode::KeepAspectRatio));
    setText(QString::fromStdString((prodotti)->visualizzaInfo()));
}

prodotto* catalogoLista::getSelezionato() const {
    return prodotti;
}
