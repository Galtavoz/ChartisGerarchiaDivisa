#include "modello.h"

Modello::Modello(std::string p): path(p), Prodotto(new lista<deepPtr<prodotto>>), salvaModifiche(true) {}

Modello::~Modello() {
    Prodotto->clear();
    delete Prodotto;
}

std::string Modello::getPath() const {
    return path;
}

void Modello::setPath(std::string s) {
    path = s;
//    delete Prodotto;
    salvaModifiche = false;
    Prodotto = new lista<deepPtr<prodotto>>();
}

bool Modello::getSalvaModifiche() const {
    return salvaModifiche;
}

lista<deepPtr<prodotto>> Modello::getListaCatalogo() const {
    return *Prodotto;
}

void Modello::setSalvaModifiche(bool s) {
    salvaModifiche = s;
}

 lista<deepPtr<prodotto>>::iteratore Modello::inizioIter() {
    return Prodotto->inizio();
}

 lista<deepPtr<prodotto>>::iteratore Modello::fineIter() {
    return Prodotto->fine();
}

 lista<deepPtr<prodotto>>::iteratoreConst Modello::inizioCIter() const {
    return Prodotto->inizioC();
}

 lista<deepPtr<prodotto>>::iteratoreConst Modello::fineCIter() const {
    return Prodotto->fineC();
}

void Modello::Salva(){
    QSaveFile salvaFile(QString::fromStdString(path));
    if(!salvaFile.open(QIODevice::WriteOnly)) qWarning() <<"Errore nel salvataggio del file";
    QXmlStreamWriter scrivi(&salvaFile);

    scrivi.setAutoFormatting(true);
    scrivi.writeStartDocument();

    scrivi.writeStartElement("root");
    auto cit = inizioIter();
    while(cit!=fineIter()) {
        const prodotto* nuovoCatalogo = &(**cit);
        const QString elementoCatalogo = QString::fromStdString(nuovoCatalogo->tipoElemento());
        scrivi.writeEmptyElement(elementoCatalogo);
        scrivi.writeAttribute("nome",QString::fromStdString(nuovoCatalogo->getNome()));
        scrivi.writeAttribute("confezioneRegalo",nuovoCatalogo->getConfezioneRegalo()==true ? "Si" : "No");

        if(elementoCatalogo=="biscotti"){
            QString ing;
            const biscotti* Biscotti = dynamic_cast<const biscotti*>(nuovoCatalogo);
            std::vector<std::string> ingredienti = Biscotti->getIngredienti();
            for(std::vector<std::string>::iterator scorri=ingredienti.begin(); scorri!=ingredienti.end();++scorri){
                if(scorri!=ingredienti.cend()-1) ing.append(QString::fromStdString(*scorri)).append(",");
                else ing.append(QString::fromStdString(*scorri));
            }
            scrivi.writeAttribute("ingredienti",ing);
            scrivi.writeAttribute("peso",QString("%1").arg((Biscotti->getPeso())));
            scrivi.writeAttribute("erba",Biscotti->getErba()==true ? "Si" : "No");
            scrivi.writeAttribute("produzione",Biscotti->getProduzione()==true ? "Si" : "No");
            scrivi.writeAttribute("farina",QString("%1").arg((Biscotti->getTipoFarina())));
            scrivi.writeAttribute("gocceCioccolata",QString("%1").arg((Biscotti->getGocceCioccolata())));
        }
        if(elementoCatalogo=="cioccolata"){
            QString ing;
            const cioccolata* Cioccolata = dynamic_cast<const cioccolata*>(nuovoCatalogo);
            std::vector<std::string> ingredienti = Cioccolata->getIngredienti();
            for(std::vector<std::string>::iterator scorri=ingredienti.begin(); scorri!=ingredienti.end();++scorri){
                if(scorri!=ingredienti.cend()-1) ing.append(QString::fromStdString(*scorri)).append(",");
                else ing.append(QString::fromStdString(*scorri));
            }
            scrivi.writeAttribute("ingredienti",ing);
            scrivi.writeAttribute("peso",QString("%1").arg((Cioccolata->getPeso())));
            scrivi.writeAttribute("erba",Cioccolata->getErba()==true ? "Si" : "No");
            scrivi.writeAttribute("produzione",Cioccolata->getProduzione()==true ? "Si" : "No");
            scrivi.writeAttribute("tipoGranella",QString("%1").arg((Cioccolata->getTipoGranella())));
            scrivi.writeAttribute("livelloFondenza",QString("%1").arg((Cioccolata->getLivelloFondenza())));
            scrivi.writeAttribute("forma",Cioccolata->getForma()==true ? "Si" : "No");
        }
        if(elementoCatalogo=="infusi"){
            QString ing;
            QString aromi;
            const infusi* Infusi = dynamic_cast<const infusi*>(nuovoCatalogo);
            std::vector<std::string> ingredienti = Infusi->getIngredienti();
            for(std::vector<std::string>::iterator scorri=ingredienti.begin(); scorri!=ingredienti.end();++scorri){
                if(scorri!=ingredienti.cend()-1) ing.append(QString::fromStdString(*scorri)).append(",");
                else ing.append(QString::fromStdString(*scorri));
            }
            scrivi.writeAttribute("ingredienti",ing);
            scrivi.writeAttribute("peso",QString("%1").arg((Infusi->getPeso())));
            scrivi.writeAttribute("erba",Infusi->getErba()==true ? "Si" : "No");
            scrivi.writeAttribute("produzione",Infusi->getProduzione()==true ? "Si" : "No");
            std::vector<std::string> aroma = Infusi->getAroma();
            for(std::vector<std::string>::iterator scorri=aroma.begin(); scorri!=aroma.end();++scorri){
                if(scorri!=aroma.cend()-1) aromi.append(QString::fromStdString(*scorri)).append(",");
                else aromi.append(QString::fromStdString(*scorri));
            }
            scrivi.writeAttribute("aroma",aromi);
            scrivi.writeAttribute("sfuso",Infusi->getSfuso()==true ? "Si" : "No");
        }

        if(elementoCatalogo=="bong"){
            QString ing;
            const bong* Bong = dynamic_cast<const bong*>(nuovoCatalogo);
            scrivi.writeAttribute("colori",QString::fromStdString(Bong->getColori()));
            scrivi.writeAttribute("forma",Bong->getForma()==true ? "Si" : "No");
            scrivi.writeAttribute("altezza",QString("%1").arg((Bong->getAltezza())));
            scrivi.writeAttribute("larghezza",QString("%1").arg((Bong->getLarghezza())));
         }
        if(elementoCatalogo=="vaporizzatore"){
            QString ing;
            const vaporizzatore* Vaporizzatore = dynamic_cast<const vaporizzatore*>(nuovoCatalogo);
            scrivi.writeAttribute("colori",QString::fromStdString(Vaporizzatore->getColori()));
            scrivi.writeAttribute("velocitaEvaporazione",QString("%1").arg((Vaporizzatore->getVelocitaEvaporazione())));
            scrivi.writeAttribute("capienza",QString("%1").arg((Vaporizzatore->getCapienza())));
            scrivi.writeAttribute("schermo",Vaporizzatore->getSchermo()==true ? "Si" : "No");
         }
        if(elementoCatalogo=="grinder"){
            QString ing;
            const grinder* Grinder = dynamic_cast<const grinder*>(nuovoCatalogo);
            scrivi.writeAttribute("colori",QString::fromStdString(Grinder->getColori()));
            scrivi.writeAttribute("ndenti",QString("%1").arg((Grinder->getNdenti())));
            scrivi.writeAttribute("raccoglipolline",Grinder->getRaccogliPolline()==true ? "Si" : "No");
        }

        //faccio col clear delete *cit;
        ++cit;
    }
    scrivi.writeEndElement();
    scrivi.writeEndDocument();
    salvaModifiche = true;
    salvaFile.commit();
}

void Modello::Carica() {
    QFile salvaFile(QString::fromStdString(path));
    if(!salvaFile.open(QIODevice::ReadOnly)) {
        qWarning() <<"Errore nell'apertura del file "<<salvaFile.errorString();
        return;
    }
    QXmlStreamReader lettore(&salvaFile);
    if(lettore.readNextStartElement()) {
        if(lettore.name()=="root") {
            while(lettore.readNextStartElement()) {

                const QXmlStreamAttributes field = lettore.attributes();

                std::string nome = field.value("nome").toString().toStdString();
                bool confezioneRegalo = field.value("confezioneRegalo").toString()=="Si" ? true : false;

                prodotto* elementoXml = nullptr;

                if(lettore.name()=="biscotti") {
                    std::string ingredienti = field.value("ingredienti").toString().toStdString();
                    std::vector<std::string> listaIngredienti;
                    const char* v=",";
                    std::string ing="";
                    int lung=ingredienti.length();
                    for(int i=0;i<lung;++i) {
                        while(ingredienti[i]!=*v && i<lung) {
                            std::string lettera=toString(ingredienti[i]);
                            ing.append(lettera);
                            ++i;
                        }
                    listaIngredienti.push_back(ing);
                    ing.clear();
                    }
                    double peso = field.value("peso").toDouble();
                    bool erba = field.value("erba").toString()=="Si" ? true : false;
                    bool produzione = field.value("produzione").toString()=="Si" ? true : false;
                    int tipoFarina = field.value("farina").toUInt();
                    int gocceCioccolata = field.value("gocceCioccolata").toUInt();

                    elementoXml = new biscotti(nome,confezioneRegalo,listaIngredienti,peso,erba,produzione,tipoFarina,gocceCioccolata);
                }

                if(lettore.name()=="cioccolata") {
                    std::string ingredienti = field.value("ingredienti").toString().toStdString();
                    std::vector<std::string> listaIngredienti;
                    const char* v=",";
                    std::string ing="";
                    int lung=ingredienti.length();
                    for(int i=0;i<lung;++i) {
                        while(ingredienti[i]!=*v && i<lung) {
                            std::string lettera=toString(ingredienti[i]);
                            ing.append(lettera);
                            ++i;
                        }
                    listaIngredienti.push_back(ing);
                    ing.clear();
                    }
                    double peso = field.value("peso").toDouble();
                    bool erba = field.value("erba").toString()=="Si" ? true : false;
                    bool produzione = field.value("produzione").toString()=="Si" ? true : false;
                    int tipoGranella = field.value("tipoGranella").toUInt();
                    int livelloFondenza = field.value("livelloFondenza").toUInt();
                    bool forma = field.value("forma").toString()=="Si" ? true : false;

                    elementoXml = new cioccolata(nome,confezioneRegalo,listaIngredienti,peso,erba,produzione,tipoGranella,livelloFondenza,forma);
                }

                if(lettore.name()=="infusi") {
                    std::string ingredienti = field.value("ingredienti").toString().toStdString();
                    std::vector<std::string> listaIngredienti;
                    const char* v=",";
                    std::string ing="";
                    int lung=ingredienti.length();
                    for(int i=0;i<lung;++i) {
                        while(ingredienti[i]!=*v && i<lung) {
                            std::string lettera=toString(ingredienti[i]);
                            ing.append(lettera);
                            ++i;
                        }
                    listaIngredienti.push_back(ing);
                    ing.clear();
                    }
                    double peso = field.value("peso").toDouble();
                    bool erba = field.value("erba").toString()=="Si" ? true : false;
                    bool produzione = field.value("produzione").toString()=="Si" ? true : false;
                    std::string aroma = field.value("aroma").toString().toStdString();

                    std::vector<std::string> listaAromi;
                    const char* v1=",";
                    std::string ing1="";
                    int lung1=aroma.length();
                    for(int i=0;i<lung1;++i) {
                        while(aroma[i]!=*v1 && i<lung1) {
                            std::string lettera1=toString(aroma[i]);
                            ing1.append(lettera1);
                            ++i;
                        }
                    listaAromi.push_back(ing1);
                    ing1.clear();
                    }
                    bool sfuso = field.value("sfuso").toString()=="Si" ? true : false;

                    elementoXml = new infusi(nome,confezioneRegalo,listaIngredienti,peso,erba,produzione,listaAromi,sfuso);
                }

                if(lettore.name()=="bong") {
                    std::string colori = field.value("colori").toString().toStdString();
                    bool forma = field.value("forma").toString()=="Si" ? true : false;
                    int altezza = field.value("altezza").toUInt();
                    double larghezza = field.value("larghezza").toDouble();


                    elementoXml = new bong(nome,confezioneRegalo,colori,forma,altezza,larghezza);
                }

                if(lettore.name()=="vaporizzatore") {
                    std::string colori = field.value("colori").toString().toStdString();
                    int velocitaEvaporazione = field.value("velocitaEvaporazione").toUInt();
                    double capienza = field.value("capienza").toUInt();
                    bool schermo = field.value("schermo").toString()=="Si" ? true : false;


                    elementoXml = new vaporizzatore(nome,confezioneRegalo,colori,velocitaEvaporazione,capienza,schermo);
                }

                if(lettore.name()=="grinder") {
                    std::string colori = field.value("colori").toString().toStdString();
                    int ndenti = field.value("ndenti").toUInt();
                    bool raccoglipolline = field.value("raccoglipolline").toString()=="Si" ? true : false;


                    elementoXml = new grinder(nome,confezioneRegalo,colori,ndenti,raccoglipolline);
                }

                deepPtr<prodotto>* inserisci = new deepPtr<prodotto>(elementoXml);

                if(inserisci!=nullptr) {
                    Prodotto->aggiungiCoda(*inserisci);
                }


                if(!lettore.isEndDocument()) lettore.skipCurrentElement();

            }
        }
    }
    salvaFile.close();
    salvaModifiche=true;
}

std::string Modello::toString(char x) {
    std::string s(1, x);
    return s;
}

void Modello::inserisci(prodotto* p) {
   deepPtr<prodotto>* elemento = new deepPtr<prodotto>(p);
    Prodotto->aggiungiTesta(*elemento);
}

void Modello::rimuovi(prodotto* p) {
    Prodotto->togliUno(p);
}

int Modello::contaCatalogo() {
    int conta=0;
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) conta++;
    return conta;
}

int Modello::contaBiscotti() {
    int conta=0;
    for(auto it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
        prodotto* bisc= &(**it);
        if(dynamic_cast<biscotti*>(bisc)) conta++;
    }
    return conta;
}

int Modello::contaCioccolata() {
    int conta=0;
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
         prodotto* ciocc= &(**it);
        if(dynamic_cast<const cioccolata*>(ciocc)) conta++;
    }
    return conta;
}

int Modello::contaInfusi() {
    int conta=0;
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
         prodotto* inf= &(**it);
        if(dynamic_cast<const infusi*>(inf)) conta++;
    }
    return conta;
}

int Modello::contaBong() {
    int conta=0;  
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
        prodotto* bng= &(**it);
        if(dynamic_cast<const bong*>(bng)) conta++;
    }
    return conta;
}

int Modello::contaVapo() {
    int conta=0;
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
        prodotto* vp= &(**it);
        if(dynamic_cast<const vaporizzatore*>(vp)) conta++;
    }
    return conta;
}

int Modello::contaGrinder() {
    int conta=0;
    for(lista<deepPtr<prodotto>>::iteratore it=Prodotto->inizio(); it!=Prodotto->fine();++it) {
        prodotto* gr= &(**it);
        if(dynamic_cast<const grinder*>(gr)) conta++;
    }
    return conta;
}
