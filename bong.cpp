#include"bong.h"

//BONG
bong::bong(std::string n,bool cr,std::string c,bool frm,int alt,double largh):
    nonConsumabile(n,cr,c),backer(frm),altezza(alt),larghezza(largh){}
//GET
bool bong::getForma() const{
    return backer;
}

int bong::getAltezza() const{
    return altezza;
}

double bong::getLarghezza() const{
    return larghezza;
}

//SET
bool bong::setForma(bool frm){
    return backer=frm;
}

int bong::setAltezza(int alt){
    return altezza=alt;
}

double bong::setLarghezza(double largh){
    return larghezza=largh;
}
//METODI
double  bong::prezzo() const{
    double prezzo=0;
    if(backer){
       if(altezza == 5) prezzo+=119;
       else if(altezza == 6) prezzo+=139;
    }
    else {
        if(altezza == 1) prezzo+=54.90;
        else if(altezza == 2) prezzo+=74.90;
        else if(altezza == 3) prezzo+=94.90;
        else  prezzo+=119;
    };

    return  prezzo;
}

std::string bong::visualizzaInfo() const {
    std::string frase = nonConsumabile::visualizzaInfo();
    std::string altezza;
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    std::stringstream Larghezza;
    Larghezza<<std::fixed<<std::setprecision(1)<<getLarghezza();
    if(getAltezza()==1) altezza="24";
    else if(getAltezza()==2) altezza="32";
    else if(getAltezza()==3) altezza="37";
    else if(getAltezza()==4) altezza="46";
    else if(getAltezza()==5) altezza="33";
    else altezza="45";
    return frase.append("\n Forma :").append(getForma() ? "Beaker" : "Dritto")
           .append("\n Dimensioni(HxL): "+altezza+(" X "))+Larghezza.str().append("cm")
           .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
           .append("\n Ricavo: "+Ricavo.str()+("€"));
}
bong *bong::clone() const{
    return new bong(*this);
}
double bong::ricavo() const{
    return (prezzo()/100)*18;
}

std::string  bong::tipoElemento() const{
    return "bong";
}
//OPERATORI
bool bong::operator==(const prodotto &p) const {
    const bong* bon = dynamic_cast<const bong*>(&p);
    return nonConsumabile::operator==(p) && backer==bon->backer && altezza==bon->altezza && larghezza==bon->larghezza;
}
