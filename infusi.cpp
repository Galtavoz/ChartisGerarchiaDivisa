#include"infusi.h"

//INFUSI
infusi::infusi(std::string n,bool cr,std::vector<std::string> ingr,double p,bool erb,bool prod,std::vector<std::string> ar,bool sf):
    consumabile(n,cr,ingr,p,erb,prod),aroma(ar),sfuso(sf){}
//GET
std::vector<std::string> infusi::getAroma() const{
    return aroma;
}
bool infusi::getSfuso() const{
    return sfuso;
}
//SET
void infusi::setAroma(std::string arm){
    for(unsigned int i=0;i<aroma.size();++i){
        if(arm==aroma[i]) return;
    }
    aroma.push_back(arm);
    return;
}
bool infusi::setSfuso(bool sf){
    return sfuso=sf;
}
void infusi::svuotaAromi() {
    aroma.clear();
}
//METODI
double infusi::prezzo() const{
    double prezzo=10*getPeso();
    if(sfuso) prezzo+=getPeso()*39.85;
    else prezzo+=getPeso()*29.98;
    if(aroma.size()==1) return prezzo;
    else return prezzo+3;
}

std::string infusi::visualizzaInfo() const {
    std::string frase = consumabile::visualizzaInfo();
    std::string aroma="";
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    std::vector<std::string> vettore=getAroma();
    for(std::vector<std::string>::const_iterator cit=vettore.cbegin();cit!=vettore.cend();++cit) {
        if(cit!=vettore.cend()-1) aroma.append(*cit+",");
        else aroma.append(*cit);
    }
    return frase.append("\n Aroma: "+aroma)
           .append("\n Sfuso :").append(getSfuso() ? "Si" : "No")
           .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
           .append("\n Ricavo: "+Ricavo.str()+("€"));
}
infusi *infusi::clone() const{
    return new infusi(*this);
}
double infusi::ricavo() const{
    return (prezzo()/100)*20;
}
std::string  infusi::tipoElemento() const{
    return "infusi";
}
//OPERATORI
bool infusi::operator==(const prodotto &p) const {
    bool flag=false;
    std::vector<std::string> stringAroma;
    const infusi* inf = dynamic_cast<const infusi*>(&p);
    if(inf!=nullptr){
        stringAroma=inf->getAroma();
    }
    std::vector<std::string> stringRicerca=getAroma();
    for (unsigned int i=0;i<stringAroma.size();++i) {
        if(stringAroma.size()==stringRicerca.size()){
            for (unsigned int j=0;j<stringRicerca.size();++j){
                if(stringAroma[i]==stringRicerca[j])
                   flag=true;
            }
        }
    }
    return consumabile::operator==(p) && sfuso==inf->sfuso && flag;
}
