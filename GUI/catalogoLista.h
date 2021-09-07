#ifndef CATALOGOLISTA_H
#define CATALOGOLISTA_H

#include<QListWidgetItem>

#include "prodotto.h"
#include "consumabile.h"
#include "nonConsumabile.h"
#include "biscotti.h"
#include "cioccolata.h"
#include "infusi.h"
#include "grinder.h"
#include "vaporizzatore.h"
#include "bong.h"
#include "container.h"
#include"DeepPtr.h"

class catalogoLista: public QListWidgetItem {
private:
    QWidget* parent;
   prodotto* prodotti;
public:
    catalogoLista(QWidget* = nullptr, prodotto* = nullptr);
    void aggiornaLista();
    prodotto* getSelezionato() const;
};

#endif // CATALOGOLISTA_H
