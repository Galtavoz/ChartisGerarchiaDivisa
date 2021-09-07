#ifndef ELEMENTOWIDGET_H
#define ELEMENTOWIDGET_H


#include"GUI/catalogoLista.h"

#include<QListWidget>
#include<QPushButton>
#include<QScrollBar>

class elementoWidget: public QListWidget {
private:
    QWidget* parent;
public:
    elementoWidget(QWidget* = nullptr);
    void aggiungiElemento(prodotto*);
    catalogoLista* currentItem() const;
};

#endif // ELEMENTOWIDGET_H
