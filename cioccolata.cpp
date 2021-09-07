#include"cioccolata.h"

//CIOCCOLATA
cioccolata::cioccolata(std::string n,bool cr,std::vector<std::string> ingr,double p,bool erb,bool prod,int tg,int lvf,bool forma):
    consumabile(n,cr,ingr,p,erb,prod),tipoGranella(tg),livelloFondenza(lvf),stecca(forma){}
//GET
int cioccolata::getTipoGranella() const{
    return tipoGranella;
}
int cioccolata::getLivelloFondenza() const{
    return livelloFondenza;
}
bool cioccolata::getForma() const{
    return stecca;
}
//SET
int cioccolata::setTipoGranella(int tg){
    return tipoGranella=tg;
}
int cioccolata::setLivelloFondenza(int lvf){
    return livelloFondenza=lvf;
}
bool cioccolata::setForma(bool frm){
    return stecca=frm;
}
//METODI
double cioccolata::prezzo() const{
    double prezzo=30*getPeso();
    if(livelloFondenza ==1) prezzo+=(getPeso()*9);
    else if (livelloFondenza ==2) prezzo+=(getPeso()*7);
    else if (livelloFondenza ==3) prezzo+=(getPeso()*7.50);
    else prezzo+=(getPeso()*8);

    if(tipoGranella == 1) prezzo+=(getPeso()/2)*0.30;
    else if(tipoGranella == 2) prezzo+=(getPeso()/2)*0.40;
    else if(tipoGranella == 3)prezzo+=(getPeso()/2)*0.60;
    else if(tipoGranella == 4) prezzo+=(getPeso()/2)*0.80;

    return prezzo;
}

std::string cioccolata::visualizzaInfo() const {
    std::string frase = consumabile::visualizzaInfo();
    std::string fondenza;
    std::string granella;
    std::stringstream Ricavo;
    Ricavo<<std::fixed<<std::setprecision(2)<<ricavo();
    std::stringstream Prezzo;
    Prezzo<<std::fixed<<std::setprecision(2)<<prezzo();
    if(getLivelloFondenza()==1) fondenza="0%";
    else if(getLivelloFondenza()==2) fondenza="50%";
    else if(getLivelloFondenza()==3) fondenza="75%";
    else fondenza="90%";
    if(getTipoGranella()==1) granella="Cocco";
    else if(getTipoGranella()==2) granella="Noce";
    else if(getTipoGranella()==3) granella="Mandorla";
    else granella="Nocciola";
    return frase.append("\n Percentuale di fondenza: "+fondenza)
           .append("\n Tipo di granella: "+granella)
           .append("\n Forma :").append(getForma() ? "Stecche" : "Praline")
           .append("\n Prezzo al pubblico: "+Prezzo.str()+("€"))
           .append("\n Ricavo: "+Ricavo.str()+("€"));

}
cioccolata *cioccolata::clone() const{
    return new cioccolata(*this);
}

double cioccolata::ricavo() const{
    return (prezzo()/100)*25;
}

std::string  cioccolata::tipoElemento() const{
    return "cioccolata";
}
//OPERATORI
bool cioccolata::operator==(const prodotto &p) const {
    const cioccolata* ciocc = dynamic_cast<const cioccolata*>(&p);
    return consumabile::operator==(p) && tipoGranella==ciocc->tipoGranella && livelloFondenza==ciocc->livelloFondenza && stecca==ciocc->stecca;
}
