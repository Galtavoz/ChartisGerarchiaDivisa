#ifndef INFUSI_H
#define INFUSI_H

#include"consumabile.h"

class infusi: public consumabile{
private:
    std::vector<std::string> aroma;
    bool sfuso;//True sfuso ; False in bustina
public:
    infusi(std::string,bool,std::vector<std::string>,double,bool,bool,std::vector<std::string>,bool);
    virtual ~infusi() = default;
    //GET
    std::vector<std::string> getAroma() const;
    bool getSfuso() const;
    //SET
    void setAroma(std::string);
    bool setSfuso(bool);
    //METODI
    virtual double prezzo() const override;
    virtual double ricavo() const override;
    virtual std::string  tipoElemento() const override;
    virtual std::string visualizzaInfo() const override;
    void svuotaAromi();
    infusi* clone() const override;
    //OPERATORI
    virtual bool operator==(const prodotto&) const override;
};

#endif // INFUSI_H
