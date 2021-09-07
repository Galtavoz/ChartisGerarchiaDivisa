#ifndef BISCOTTI_H
#define BISCOTTI_H

#include<iostream>
#include<vector>
#include<sstream>
#include<iomanip>
#include"consumabile.h"

enum farina     {grano=1,riso=2,mandorle=3,castagne=4,amaranto=5};
enum gocce      {latte=1,fondente=2,bianco=3,senza=4};

class biscotti: public consumabile{
private:
    int  tipoFarina = farina{};
    int  gocceCioccolata = gocce{};
public:
    biscotti(std::string,bool,std::vector<std::string>,double,bool,bool,int,int);
    virtual ~biscotti() = default;
    //GET
    int   getTipoFarina() const;
    int   getGocceCioccolata() const;
    //SET
    int   setTipoFarina(int);
    int   setGocceCioccolata(int);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
    virtual std::string visualizzaInfo() const override;
    biscotti* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;
};

#endif // BISCOTTI_H
