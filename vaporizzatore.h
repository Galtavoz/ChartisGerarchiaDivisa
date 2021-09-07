#ifndef VAPORIZZATORE_H
#define VAPORIZZATORE_H

#include"nonConsumabile.h"

enum lvVelocitaEvaporazione {lv1=1,lv2=2,lv3=3};

class vaporizzatore: public nonConsumabile{
private:
    int  velocitaEvaporazione = lvVelocitaEvaporazione{};//più è alta la velocita piu velocemnte vaporizza
    int  capienza;//capienza dello sportello portaerba espressa in grammi
    bool schermo;
public:
    vaporizzatore(std::string,bool,std::string,int,double,bool);
    virtual ~vaporizzatore() = default;
    //GET
    int  getVelocitaEvaporazione() const;
    int   getCapienza() const;
    bool  getSchermo() const;
    //SET
    int  setVelocitaEvaporazione(int);
    int  setCapienza(int);
    bool setSchermo(bool);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
    virtual std::string visualizzaInfo() const override;
    vaporizzatore* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;
};

#endif // VAPORIZZATORE_H
