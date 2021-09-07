#ifndef NONCONSUMABILE_H
#define NONCONSUMABILE_H

#include"prodotto.h"

class nonConsumabile: public prodotto{
private:
    std::string colori;
public:
    nonConsumabile(std::string,bool,std::string);
    virtual ~nonConsumabile() = default;
    //GET
    std::string getColori() const;
    //SET
    void setColori(std::string);
    //METODI
    virtual double prezzo() const = 0;
    virtual double ricavo() const = 0;
    virtual std::string  tipoElemento() const =0;
    virtual std::string visualizzaInfo() const;
    virtual nonConsumabile* clone() const =0;
    //OPERATORI
    virtual bool operator==(const prodotto&) const;
};

#endif // NONCONSUMABILE_H
