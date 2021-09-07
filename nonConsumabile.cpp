#include"nonConsumabile.h"

//NONCONSUMABILE
nonConsumabile::nonConsumabile(std::string n,bool cr,std::string c):
    prodotto(n,cr),colori(c){}
//GET
std::string nonConsumabile::getColori() const{
    return colori;
}
//SET
void nonConsumabile::setColori(std::string c){
    colori=c;
    return;
}
//METODI
std::string nonConsumabile::visualizzaInfo() const {
    std::string frase = prodotto::visualizzaInfo();
    std::string colori=getColori();
    return frase.append("\n Colori: "+colori);
}
//OPERATORI
bool nonConsumabile::operator==(const prodotto &p) const {
    const nonConsumabile* nc = dynamic_cast<const nonConsumabile*>(&p);
    return prodotto::operator==(p) && colori==nc->colori;
}
