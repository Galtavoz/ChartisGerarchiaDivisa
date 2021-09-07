#include"popup.h"

popup::popup(QString n,QString t):
    nomeFinestra(n),
    testo(t)
{
    this->setWindowTitle(nomeFinestra);
    this->setText(testo);
    if(n == "Informazione") {
        setIcon(QMessageBox::Information);
        setWindowIcon(QIcon("../ChartisLair/IMMAGINI/logo.png"));
    } else if(n== "Warning") {
        setIcon(QMessageBox::Warning);
        setWindowIcon(QIcon("../ChartisLair/IMMAGINI/logo.png"));
    } else {
        setIcon(QMessageBox::Critical);
        setWindowIcon(QIcon("../ChartisLair/IMMAGINI/logo.png"));
    }
}
