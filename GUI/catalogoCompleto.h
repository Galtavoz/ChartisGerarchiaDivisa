#ifndef CATALOGOCOMPLETO_H
#define CATALOGOCOMPLETO_H


#include<QWidget>
#include<QListWidget>
#include<QScrollBar>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>

#include"GUI/elementoWidget.h"

class catalogoCompleto: public QWidget {
private:
    QWidget* parent;
    elementoWidget* listaCatalogo;
    QPushButton* modifica;
    QPushButton* rimuovi;
public:
    catalogoCompleto(QWidget* = nullptr);
    elementoWidget* getLista() const;
    QPushButton* getModifica() const;
    QPushButton* getRimuovi() const;
};

#endif // CATALOGOCOMPLETO_H
