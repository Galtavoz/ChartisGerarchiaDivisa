#ifndef GRINDER_H
#define GRINDER_H

#include"nonConsumabile.h"

class grinder: public nonConsumabile{
private:
    int  ndenti;
    bool raccoglipolline;
public:
    grinder(std::string,bool,std::string,int,bool);
    virtual ~grinder() = default;
    //GET
    int   getNdenti() const;
    bool  getRaccogliPolline() const;
    //SET
    int  setNdenti(int);
    bool setRaccogliPolline(bool);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
     virtual std::string visualizzaInfo() const override;
    grinder* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;
};

#endif // GRINDER_H
