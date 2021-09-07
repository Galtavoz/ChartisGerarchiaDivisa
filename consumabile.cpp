#include"consumabile.h"

//CONSUMABILI
consumabile::consumabile(std::string n,bool cr,std::vector<std::string> ingr,double p,bool erb,bool prod):
    prodotto(n,cr),ingredienti(ingr), peso(p),erba(erb),produzione(prod){}
//GET
std::vector<std::string> consumabile::getIngredienti() const{
    return ingredienti;
}
double consumabile::getPeso() const{
    return peso;
}
bool consumabile::getErba() const{
    return erba;
}
bool consumabile::getProduzione() const{
    return produzione;
}
//SET
void consumabile::setIngredienti(std::string ing){
    for(unsigned int i=0;i<ingredienti.size();++i){
        if(ing==ingredienti[i]) return;
    }
    ingredienti.push_back(ing);
    return;
}
double consumabile::setPeso(double p){
    return peso=p;
}
bool consumabile::setErba(bool flag){
    return erba=flag;
}
bool consumabile::setProduzione(bool flag){
    return produzione=flag;
}
//METODI
std::string consumabile::visualizzaInfo() const {
    std::string frase = prodotto::visualizzaInfo();
    std::string ingredienti="";
    std::vector<std::string> vettore=getIngredienti();
    std::stringstream Peso;
    Peso<<std::fixed<<std::setprecision(3)<<getPeso();
    for(std::vector<std::string>::const_iterator cit=vettore.cbegin();cit!=vettore.cend();++cit) {
        if(cit!=vettore.cend()-1) ingredienti.append(*cit+",");
        else ingredienti.append(*cit);
    }
    return frase.append("\n Ingredienti: "+ingredienti)
           .append("\n Peso(in Kg): ")+Peso.str().append("Kg")
           .append("\n Tipologia di erba: ").append(getErba() ? "Indica" : "Sativa")
           .append("\n Produzione :").append(getProduzione() ? "Indoor" : "Outdoor");
}
//OPERATORI
bool consumabile::operator==(const prodotto &p) const {
    const consumabile* con = dynamic_cast<const consumabile*>(&p);
    return prodotto::operator==(p) && peso==con->peso && erba==con->erba && produzione==con->produzione;
}
