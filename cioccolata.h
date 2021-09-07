#ifndef CIOCCOLATA_H
#define CIOCCOLATA_H

#include"consumabile.h"

enum fondenza   {niente=1,bassa=2,media=3,alta=4};//1=0%, 2=50%, 3=75%, 4=90%
enum granella   {cocco=1,noce=2,mandorla=3,nocciola=4};

class cioccolata: public consumabile{
private:
    int  tipoGranella = granella{}; //{fondenza riga 8};
    int  livelloFondenza = fondenza{}; //{fondenza riga 7};
    bool stecca;//True Stecca ; False Pallina
public:
    cioccolata(std::string,bool,std::vector<std::string>,double,bool,bool,int,int,bool);
    virtual ~cioccolata() = default;
    //GET
    int   getTipoGranella() const;
    int   getLivelloFondenza() const;
    bool  getForma() const;
    //SET
    int   setTipoGranella(int);
    int   setLivelloFondenza(int);
    bool  setForma(bool);
    bool  setProduzione(bool);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
    virtual std::string visualizzaInfo() const override;
    cioccolata* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;

};

#endif // CIOCCOLATA_H
