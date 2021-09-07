#ifndef PRODOTTO_H
#define PRODOTTO_H

#include<iostream>
#include<vector>
#include<sstream>
#include<iomanip>

class prodotto{
private:
    std::string nome;
    bool confezioneRegalo;
public:
    prodotto(std::string,bool);
    virtual ~prodotto() = default;
    //GET
    std::string getNome() const;
    bool getConfezioneRegalo() const;
    //SET
    std::string setNome(std::string);
    bool setConfezioneRegalo(bool);
    //METODI
    virtual double prezzo() const = 0;
    virtual double ricavo() const = 0;
    virtual std::string  tipoElemento() const =0;
    virtual std::string visualizzaInfo() const;


    virtual prodotto* clone() const =0;
     //OPERATORI
    virtual bool operator==(const prodotto&) const;
};

#endif // PRODOTTO_H
