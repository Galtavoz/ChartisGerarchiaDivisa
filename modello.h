#ifndef MODELLO_H
#define MODELLO_H

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


#include<QFile>
#include<QSaveFile>
#include<QXmlStreamReader>
#include<QDebug>
#include<iostream>

class Modello{
private:
        std::string path;
        lista<deepPtr<prodotto>>* Prodotto;
        bool salvaModifiche;
public:
        Modello(std::string=":/SALVATAGGIO/listaCatalogo.xml");
        ~Modello();

        std::string getPath() const;
        bool getSalvaModifiche() const;
        lista<deepPtr<prodotto>> getListaCatalogo() const;
        void setSalvaModifiche(bool);
        void setPath(std::string = "");

        lista<deepPtr<prodotto>>::iteratore inizioIter();
        lista<deepPtr<prodotto>>::iteratore fineIter();
        lista<deepPtr<prodotto>>::iteratoreConst inizioCIter() const;
        lista<deepPtr<prodotto>>::iteratoreConst fineCIter() const;

        void Salva();
        void Carica();

        std::string toString(char);

        void inserisci(prodotto*);
        void rimuovi(prodotto*);
        int contaCatalogo();
        int contaBiscotti();
        int contaCioccolata();
        int contaInfusi();
        int contaBong();
        int contaVapo();
        int contaGrinder();
};
#endif // MODELLO_H
