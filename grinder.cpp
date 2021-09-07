#include"grinder.h"

//GRINDER
grinder::grinder(std::string n,bool cr,std::string c,int nd,bool racp):
    nonConsumabile(n,cr,c),ndenti(nd),raccoglipolline(racp){}
//GET
int grinder::getNdenti() const{
    return ndenti;
}
bool grinder::getRaccogliPolline() const{
    return raccoglipolline;
}
//SET
int grinder::setNdenti(int ndent){
    return ndenti=ndent;
}
bool grinder::setRaccogliPolline(bool racp){
    return raccoglipolline=racp;
}
//METODI
double grinder::prezzo() const{
    double prezzo=0;
    if(raccoglipolline) prezzo+=12;
    else prezzo+=10;
    return prezzo;
}
std::string grinder::visualizzaInfo() const {
    std::string frase = nonConsumabile::visualizzaInfo();
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    return frase.append("\n Numero di denti: ")+std::to_string(getNdenti())
            .append("\n Raccogli Polline :").append(getRaccogliPolline() ? "Si" : "No")
            .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
            .append("\n Ricavo: "+Ricavo.str()+("€"));
}
grinder *grinder::clone() const{
    return new grinder(*this);
}
double grinder::ricavo() const{
    return (prezzo()/100)*15;
}
std::string  grinder::tipoElemento() const{
    return "grinder";
}
//OPERATORI
bool grinder::operator==(const prodotto &p) const {
    const grinder* grd = dynamic_cast<const grinder*>(&p);
    return nonConsumabile::operator==(p) && ndenti==grd->ndenti && raccoglipolline==grd->raccoglipolline;
}
