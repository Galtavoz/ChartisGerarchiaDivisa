#include "prodotto.h"

//PRODOTTO
prodotto::prodotto(std::string n,bool cr):
    nome(n), confezioneRegalo(cr){}
//GET
std::string prodotto::getNome() const{
    return nome;
}
bool prodotto::getConfezioneRegalo() const{
    return confezioneRegalo;
}
//SET
std::string prodotto::setNome(std::string n){
    return nome=n;
}
bool prodotto::setConfezioneRegalo(bool flag){
    return confezioneRegalo=flag;
}
//METODI
std::string prodotto::visualizzaInfo() const {
    std::string frase;
    return frase.append("\n Nome: "+getNome())
           .append("\n Confezione regalo: ").append((getConfezioneRegalo() ? "Si" : "No"));
}
//OPERATORI
bool prodotto::operator==(const prodotto& p) const {
    return nome==p.nome && confezioneRegalo==p.confezioneRegalo;
}
