#ifndef BONG_H
#define BONG_H

#include"nonConsumabile.h"

enum altezze    {cm24=1,cm32=2,cm37=3,cm46=4,cm33=5,cm45=6};

class bong: public nonConsumabile{
private:
    bool backer;//True backer, False dritto
    int altezza = altezze{};
    double larghezza;
public:
    bong(std::string,bool,std::string,bool,int,double);
    virtual ~bong() = default;
    //GET
    bool  getForma() const;
    int   getAltezza() const;
    double  getLarghezza() const;
    //SET
    bool setForma(bool);
    int  setAltezza(int);
    double setLarghezza(double);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
    virtual std::string visualizzaInfo() const override;
    bong* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;
};

#endif // BONG_H
