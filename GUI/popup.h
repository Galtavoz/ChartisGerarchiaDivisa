#ifndef POPUP_H
#define POPUP_H
#include<QMessageBox>
#include<QIcon>

class popup: public QMessageBox {
private:
    QString nomeFinestra;
    QString testo;
public:
    popup(QString,QString);
};

#endif // POPUP_H
