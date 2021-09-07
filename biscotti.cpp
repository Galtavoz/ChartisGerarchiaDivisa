#include"biscotti.h"

//BISCOTTI
biscotti::biscotti(std::string n,bool cr,std::vector<std::string> ingr,double p,bool erb,bool prod,int tf,int gc):
  consumabile(n,cr,ingr,p,erb,prod),tipoFarina(tf),gocceCioccolata(gc){}
//GET
int biscotti::getTipoFarina() const{
    return tipoFarina;
}
int biscotti::getGocceCioccolata() const{
    return gocceCioccolata;
}
//SET
int biscotti::setTipoFarina(int tf){
    return tipoFarina=tf;
}
int biscotti::setGocceCioccolata(int gc){
    return gocceCioccolata=gc;
}
//METODI
double biscotti::prezzo() const{
    double prezzo=100*getPeso();
    if(tipoFarina==1) prezzo+=getPeso()*0.99;
    else if (tipoFarina==2)prezzo+=getPeso()*5;
    else if (tipoFarina==3)prezzo+=getPeso()*20;
    else if (tipoFarina==4)prezzo+=getPeso()*24;
    else prezzo+=getPeso()*9;

    if(gocceCioccolata==1) prezzo+=6.20;
    else if (gocceCioccolata==2)prezzo+=5.99;
    else if (gocceCioccolata==3)prezzo+=5.50;

    return prezzo;
}

std::string biscotti::visualizzaInfo() const {
    std::string frase = consumabile::visualizzaInfo();
    std::string farina;
    std::string gocce;
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    if(getTipoFarina()==1) farina="Grano";
    else if(getTipoFarina()==2) farina="Riso";
    else if(getTipoFarina()==3) farina="Mandorle";
    else if(getTipoFarina()==4) farina="Castagne";
    else farina="Amaranto";
    if(getGocceCioccolata()==1) gocce="Latte";
    else if(getGocceCioccolata()==2) gocce="Fondente";
    else if(getGocceCioccolata()==3) gocce="Bianco";
    else gocce="No gocce";
    return frase.append("\n Tipo di farina: "+farina)
           .append("\n Gocce: "+gocce)
           .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
           .append("\n Ricavo: "+Ricavo.str()+("€"));

}
biscotti *biscotti::clone() const{
    return new biscotti(*this);
}

double biscotti::ricavo() const{
    return (prezzo()/100)*30;
}

std::string  biscotti::tipoElemento() const{
    return "biscotti";
}

//OPERATORI
bool biscotti::operator==(const prodotto &p) const {
    const biscotti* bis = dynamic_cast<const biscotti*>(&p);
    return consumabile::operator==(p) && tipoFarina==bis->tipoFarina && gocceCioccolata==bis->gocceCioccolata;
}
