#include"vaporizzatore.h"

//VAPORIZZATORE
vaporizzatore::vaporizzatore(std::string n,bool cr,std::string c,int ve,double cap,bool scher):
    nonConsumabile(n,cr,c),velocitaEvaporazione(ve),capienza(cap),schermo(scher){}
//GET
int vaporizzatore::getVelocitaEvaporazione() const{
    return velocitaEvaporazione;
}
int vaporizzatore::getCapienza() const{
    return capienza;
}
bool vaporizzatore::getSchermo() const{
    return schermo;
}

//SET
int vaporizzatore::setVelocitaEvaporazione(int ve){
    return velocitaEvaporazione=ve;
}
int vaporizzatore::setCapienza(int cap){
    return capienza=cap;
}
bool vaporizzatore::setSchermo(bool sch){
    return schermo=sch;
}
//METODI
double vaporizzatore::prezzo() const{
    double prezzo=0;
    if(schermo) prezzo+=450;
    else prezzo+=350;
    if(velocitaEvaporazione == 1) prezzo+=50;
    else if(velocitaEvaporazione == 2) prezzo+=75;
    else prezzo+=100;
    return prezzo+=getCapienza()*0.25;
}

std::string vaporizzatore::visualizzaInfo() const {
    std::string frase = nonConsumabile::visualizzaInfo();
    std::string velocita;
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    if(getVelocitaEvaporazione()==1) velocita="Lv 1";
    else if(getVelocitaEvaporazione()==2) velocita="Lv 2";
    else velocita="Lv 3";
    return frase.append("\n Velocità evaporazione: "+velocita)
            .append("\n Capienza sportello (in grammi): ")+std::to_string(getCapienza())
            .append("\n Schermo :").append(getSchermo() ? "Si" : "No")
            .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
            .append("\n Ricavo: "+Ricavo.str()+("€"));
}
vaporizzatore *vaporizzatore::clone() const{
    return new vaporizzatore(*this);
}
double vaporizzatore::ricavo() const{
    return (prezzo()/100)*12;
}
std::string  vaporizzatore::tipoElemento() const{
    return "vaporizzatore";
}
//OPERATORI
bool vaporizzatore::operator==(const prodotto &p) const {
    const vaporizzatore* vap = dynamic_cast<const vaporizzatore*>(&p);
    return nonConsumabile::operator==(p) && velocitaEvaporazione==vap->velocitaEvaporazione && capienza==vap->capienza && schermo==vap->schermo;
}
