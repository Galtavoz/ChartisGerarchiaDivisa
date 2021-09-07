#ifndef CONSUMABILE_H
#define CONSUMABILE_H

#include<iostream>
#include<vector>
#include<sstream>
#include<iomanip>
#include"prodotto.h"

class consumabile: public prodotto{
private:
     std::vector<std::string> ingredienti;
     double peso;//prezzo al Kg
     bool erba;//True Indica ; False Sativa
     bool produzione;//True Indoor ; False Outdoor
public:
     consumabile(std::string,bool,std::vector<std::string>,double,bool,bool);
     virtual ~consumabile() = default;
     //GET
     std::vector<std::string> getIngredienti() const;
     double getPeso() const;
     bool getErba() const;
     bool getProduzione() const;
     //SET
     void setIngredienti(std::string);
     double setPeso(double);
     bool setErba(bool);
     bool setProduzione(bool);
     //METODI
     virtual double prezzo() const = 0;
     virtual double ricavo() const = 0;
     virtual std::string  tipoElemento() const =0;
     virtual std::string visualizzaInfo() const;
     virtual consumabile* clone() const =0;
     //OPERATORI
     virtual bool operator==(const prodotto&) const;
};
#endif // CONSUMABILE_H
