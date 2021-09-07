#include"GUI/elementoWidget.h"

elementoWidget::elementoWidget(QWidget* p): parent(p) {
    addScrollBarWidget(new QScrollBar(Qt::Orientation::Vertical,parent),Qt::AlignRight);
    setIconSize(QSize(150,150));
}

void elementoWidget::aggiungiElemento(prodotto* nuovoCatalogo) {
    catalogoLista* creaNuovo = new catalogoLista(parent,nuovoCatalogo);
    addItem(creaNuovo);
}

catalogoLista* elementoWidget::currentItem() const {
    return static_cast<catalogoLista*>(QListWidget::currentItem());
}
