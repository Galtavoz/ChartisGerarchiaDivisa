#include"GUI/controller.h"

Controller::Controller(Modello* m,QWidget* p):
    parent(p),
    modello(m),
    menu(new Menu(this)),
    ricerca(new Ricerca(this)),
    inserisci(new Inserisci(this)),
    catCompleto(new catalogoCompleto(this)),
    file(QFileDialog::getOpenFileName(this,tr("Scegli file"),"./SALVATAGGIO","File XML(*.xml)")),
    layoutModifica(new Modifica(this))
{


    QVBoxLayout* controller = new QVBoxLayout(this);

    setMinimumSize(800,500);
    setWindowTitle("Chartis'Lair");
    setWindowIcon(QIcon("./IMMAGINI/logo.png"));

    QRect screenGeometry = QGuiApplication::screens()[0]->geometry();
    setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, size(), screenGeometry));

    controller->setMenuBar(menu);
    controller->addWidget(catCompleto);
    controller->addWidget(ricerca);
    controller->addWidget(inserisci);
    caricaDati();

    menu->show();
    catCompleto->show();
    ricerca->hide();
    inserisci->hide();

    connect(menu->getEsci(),SIGNAL(triggered()),this,SLOT(esci()));
    connect(menu->getCarica(),SIGNAL(triggered()),this,SLOT(carica()));
    connect(menu->getHome(),SIGNAL(triggered()),this,SLOT(tornaHome()));
    connect(menu->getRicerca(),SIGNAL(triggered()),this,SLOT(vediRicerca()));
    connect(menu->getInserisci(),SIGNAL(triggered()),this,SLOT(vediInserisci()));

    connect(catCompleto->getModifica(),SIGNAL(clicked()),this,SLOT(modifica()));
    connect(catCompleto->getRimuovi(),SIGNAL(clicked()),this,SLOT(rimuoviProdotto()));

    connect(ricerca->getCercaBut(),SIGNAL(clicked()),this,SLOT(ricercaProdotti()));
    connect(ricerca->getRimuoviRicerca(),SIGNAL(clicked()),this,SLOT(rimuoviProdottoRicerca()));
    connect(ricerca->getModificaRicerca(),SIGNAL(clicked()),this,SLOT(modificaRicerca()));

    connect(inserisci->getInserisciBut(),SIGNAL(clicked()),this,SLOT(inserisciNuovoProdotto()));

    connect(layoutModifica->getSalvaMod(),SIGNAL(clicked()),this,SLOT(salvaModifiche()));
}

void Controller::caricaDati() {
    if(file!="") {
        modello->setPath(file.toStdString());
        modello->Carica();
        abilita();
        if(modello->contaCatalogo()==0) {
            popup* avvisoCarica = new popup("Warning","Attenzione,non sono presenti prodotti.");
            avvisoCarica->exec();
        } else {
            lista<deepPtr<prodotto>>::iteratore inizioLista = modello->inizioIter();
            lista<deepPtr<prodotto>>::iteratore fineLista = modello->fineIter();
//            qDebug()<<QString::fromUtf8(inizioLista->get()->getNome().c_str());
            for(;inizioLista!=fineLista;++inizioLista) {
                catCompleto->getLista()->aggiungiElemento(&(**inizioLista));
            }
            modello->setSalvaModifiche(true);
        }
    } else {
        disabilita();
        modello->setPath(file.toStdString());
    }
}

void Controller::caricaDatiXML() {
    QString caricaAncora = QFileDialog::getOpenFileName(this,tr("Scegli file"),"./SALVATAGGIO","File XML(*.xml)");
    if(caricaAncora!="") {
        modello->setPath(caricaAncora.toStdString());
        modello->Carica();
        abilita();
        if(modello->contaCatalogo()==0) {
            disabilita();
            popup* avvisoCarica = new popup("Warning","Attenzione,non sono presenti prodotti. Prova a caricare un altro file!");
            avvisoCarica->exec();
        } else {
            lista<deepPtr<prodotto>>::iteratore inizioLista = modello->inizioIter();
            lista<deepPtr<prodotto>>::iteratore fineLista = modello->fineIter();
            for(;inizioLista!=fineLista;++inizioLista) {
                catCompleto->getLista()->aggiungiElemento(&(**inizioLista));
            }
            modello->setSalvaModifiche(true);
        }
    } else {
        disabilita();
        modello->setPath(file.toStdString());
    }
}

Controller::~Controller() {}

Modello* Controller::getModello() const {
    return modello;
}
void Controller::disabilita() {

    catCompleto->hide();
    menu->getSalva()->setEnabled(false);
    menu->getRicerca()->setEnabled(false);
    menu->getInserisci()->setEnabled(false);
    menu->getHome()->setEnabled(false);
    menu->getSalva()->setEnabled(false);

}

void Controller::abilita() {

    catCompleto->show();
    menu->getSalva()->setEnabled(true);
    menu->getRicerca()->setEnabled(true);
    menu->getInserisci()->setEnabled(true);
    menu->getHome()->setEnabled(true);
    menu->getSalva()->setEnabled(true);


}
bool Controller::controlloDoppione(prodotto* p) const {
    bool controlloDoppio=false;
    lista<deepPtr<prodotto>> listaCatalogo = modello->getListaCatalogo();
    for(lista<deepPtr<prodotto>>::iteratore cit=listaCatalogo.inizio();cit!=listaCatalogo.fine();++cit) {
        if(*p==(**cit)) {
            controlloDoppio=true;
            return controlloDoppio;
        }
        else controlloDoppio=false;
    }
    return controlloDoppio;
}

void Controller::ricercaProdotti(){
    ricerca->getListaRicerca()->clear();
    //qDebug()<<QString::fromUtf8(ricerca->getTipoProdotto().c_str());
    if(ricerca->getTipoProdotto()=="Seleziona prodotto...") {
        popup* avvisoRicerca = new popup("Critical","Seleziona una tipologia di prodotto da cercare");
        avvisoRicerca->exec();
        ricerca->getListaRicerca()->clear();
        return;
    }
    lista<deepPtr<prodotto>>::iteratore inizio = modello->inizioIter();
    lista<deepPtr<prodotto>>::iteratore fine = modello->fineIter();


    if(ricerca->getTipoProdotto()=="Biscotti"){
        for(;inizio!=fine;++inizio) {
           prodotto* bs= &(**inizio);
           if(dynamic_cast<biscotti*>(bs) && (dynamic_cast<biscotti*>(bs))->getTipoFarina()==ricerca->getTipoFarina() && (dynamic_cast<biscotti*>(bs))->getGocceCioccolata()==ricerca->getTipoGocce()){
                (ricerca->getListaRicerca())->aggiungiElemento(bs);
           }
           else if(dynamic_cast<biscotti*>(bs) && ricerca->getTipoFarina()==0 && (dynamic_cast<biscotti*>(bs))->getGocceCioccolata()==ricerca->getTipoGocce()){
                (ricerca->getListaRicerca())->aggiungiElemento(bs);
           }
           else if(dynamic_cast<biscotti*>(bs) && ricerca->getTipoGocce()==0 && (dynamic_cast<biscotti*>(bs))->getTipoFarina()==ricerca->getTipoFarina()){
                (ricerca->getListaRicerca())->aggiungiElemento(bs);
           }
           else if(dynamic_cast<biscotti*>(bs) && ricerca->getTipoFarina()==0 && ricerca->getTipoGocce()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(bs);
           }
        }
    }
    if(ricerca->getTipoProdotto()=="Cioccolata"){
        for(;inizio!=fine;++inizio) {
           prodotto* ciocc= &(**inizio);
           //TUTTI SELEZIONATI
           if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getLivelloFondenza()==ricerca->getLvFondenza() && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==true && ricerca->getFormaC()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           else if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getLivelloFondenza()==ricerca->getLvFondenza() && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==false && ricerca->getFormaC()==2)){
               (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //SELEZIONATO GRANELLA, SELEZIONATO FONDENZA
           else if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getLivelloFondenza()==ricerca->getLvFondenza() && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ricerca->getFormaC()==0){
               (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           else if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getLivelloFondenza()==ricerca->getLvFondenza() && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ricerca->getFormaC()==0){
               (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //SELEZIONATO GRANELLA, SELEZIONATO FORMA
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getLvFondenza()==0 && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==true && ricerca->getFormaC()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getLvFondenza()==0 && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==false && ricerca->getFormaC()==2)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }

           //SELEZIONATO FONDENZA, SELEZIONATO FORMA
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getTipoGranella()==0 && dynamic_cast<cioccolata*>(ciocc)->getLivelloFondenza()==ricerca->getLvFondenza() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==true && ricerca->getFormaC()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getTipoGranella()==0 && dynamic_cast<cioccolata*>(ciocc)->getLivelloFondenza()==ricerca->getLvFondenza() && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==false && ricerca->getFormaC()==2)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //SELEZIONATO SOLO GRANELLA
           else if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getTipoGranella()==ricerca->getTipoGranella() && ricerca->getLvFondenza()==0 && ricerca->getFormaC()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //SELEZIONATO SOLO FONDENZA
           else if(dynamic_cast<cioccolata*>(ciocc) && (dynamic_cast<cioccolata*>(ciocc))->getLivelloFondenza()==ricerca->getLvFondenza() && ricerca->getTipoGranella()==0 && ricerca->getFormaC()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //SELEZIONATO SOLO FORMA
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getLvFondenza()==0 && ricerca->getTipoGranella()==0 && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==true && ricerca->getFormaC()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getLvFondenza()==0 && ricerca->getTipoGranella()==0 && ((dynamic_cast<cioccolata*>(ciocc))->getForma()==false && ricerca->getFormaC()==2)){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
           //NESSUN SELEZIONATO
           else if(dynamic_cast<cioccolata*>(ciocc) && ricerca->getTipoGranella()==0 && ricerca->getLvFondenza()==0 && ricerca->getFormaC()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(ciocc);
           }
        }
    }

    if(ricerca->getTipoProdotto()=="Infusi"){
        for(;inizio!=fine;++inizio) {
            prodotto* infu= &(**inizio);
            //SELEZIONATO SOLO SFUSO
            if(dynamic_cast<infusi*>(infu) && ricerca->getAroma()[0]=="0" && ((dynamic_cast<infusi*>(infu))->getSfuso()==true && ricerca->getSfuso()==1)){
                 (ricerca->getListaRicerca())->aggiungiElemento(infu);
            }
            else if(dynamic_cast<infusi*>(infu) && ricerca->getAroma()[0]=="0" && ((dynamic_cast<infusi*>(infu))->getSfuso()==false && ricerca->getSfuso()==2)){
                 (ricerca->getListaRicerca())->aggiungiElemento(infu);
            }


           //NESSUN SELEZIONATO
           else if(dynamic_cast<infusi*>(infu) && ricerca->getAroma()[0]=="0" && ricerca->getSfuso()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(infu);
           }
            //TUTTI SELEZIONATI
            else  if(dynamic_cast<infusi*>(infu) && ((dynamic_cast<infusi*>(infu))->getSfuso()==true && ricerca->getSfuso()==1)){
                std::vector<std::string> stringAroma= ((dynamic_cast<infusi*>(infu))->getAroma());
                std::vector<std::string> stringRicerca= ricerca->getAroma();
                if(stringAroma.size()==stringRicerca.size()) {
                    for (unsigned int i=0;i<stringAroma.size();++i) {
                        if(stringRicerca.size()<=1){
                             for (unsigned int j=i;j<stringRicerca.size();++j) {
                                 if(stringAroma[i]==stringRicerca[j]){
                                     (ricerca->getListaRicerca())->aggiungiElemento(infu);
                                 }
                             }
                         }
                        else{
                            if(stringAroma.size()==stringRicerca.size()){
                                for (unsigned int j=i;j<stringRicerca.size()-1;++j)
                                     if(stringAroma[i]==stringRicerca[j])
                                         (ricerca->getListaRicerca())->aggiungiElemento(infu);
                            }
                        }
                    }
                }
            }
            else if(dynamic_cast<infusi*>(infu) && ((dynamic_cast<infusi*>(infu))->getSfuso()==false && ricerca->getSfuso()==2)){
                std::vector<std::string> stringAroma= ((dynamic_cast<infusi*>(infu))->getAroma());
                std::vector<std::string> stringRicerca= ricerca->getAroma();
                if(stringAroma.size()==stringRicerca.size()) {
                    for (unsigned int i=0;i<stringAroma.size();++i) {
                        if(stringRicerca.size()<=1){
                            for (unsigned int j=i;j<stringRicerca.size();++j) {
                                 if(stringAroma[i]==stringRicerca[j]){
                                     (ricerca->getListaRicerca())->aggiungiElemento(infu);
                                 }
                             }
                        }
                        else{
                            if(stringAroma.size()==stringRicerca.size()){
                                for (unsigned int j=i;j<stringRicerca.size()-1;++j)
                                     if(stringAroma[i]==stringRicerca[j])
                                         (ricerca->getListaRicerca())->aggiungiElemento(infu);
                            }
                        }
                    }
                }

            }
           //SELEZIONATO PRIMO AROMA, SELEZIONATO SECONDO AROMA
           else if(dynamic_cast<infusi*>(infu) && ricerca->getSfuso()==0){
               std::vector<std::string> stringAroma= ((dynamic_cast<infusi*>(infu))->getAroma());
               std::vector<std::string> stringRicerca= ricerca->getAroma();
                   for (unsigned int i=0;i<stringAroma.size();++i) {
                       if(stringRicerca.size()<=1){
                           if(stringAroma.size()==stringRicerca.size()){
                               for (unsigned int j=i;j<stringRicerca.size();++j)
                                    if(stringAroma[i]==stringRicerca[j])
                                        (ricerca->getListaRicerca())->aggiungiElemento(infu);
                           }
                       }
                       else{
                           if(stringAroma.size()==stringRicerca.size()){
                               for (unsigned int j=i;j<stringRicerca.size()-1;++j)
                                    if(stringAroma[i]==stringRicerca[j])
                                        (ricerca->getListaRicerca())->aggiungiElemento(infu);
                           }
                       }
                   }

           }
        }
    }
    if(ricerca->getTipoProdotto()=="Bong"){
        for(;inizio!=fine;++inizio) {
            prodotto* bng= &(**inizio);
            //SELEZIONATO QUALSIASI
            if(dynamic_cast<bong*>(bng) && ricerca->getFormaB()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(bng);
            }
            //SELEZIONATO BACKER E QUALSIASI DIMENSIONE
            else if(dynamic_cast<bong*>(bng) && ((dynamic_cast<bong*>(bng))->getForma()==true && ricerca->getFormaB()==1) && ricerca->getAltezza()==0 && ricerca->getLarghezza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(bng);
            }
            //SELEZIONATO DRITTO E QUALSIASI DIMENSIONE
            else if(dynamic_cast<bong*>(bng) && ((dynamic_cast<bong*>(bng))->getForma()==false && ricerca->getFormaB()==2) && ricerca->getAltezza()==0 && ricerca->getLarghezza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(bng);
            }
            //SELEZIONATO BACKER E DIMENSIONE
            else if(dynamic_cast<bong*>(bng) && ((dynamic_cast<bong*>(bng))->getForma()==true && ricerca->getFormaB()==1) && (dynamic_cast<bong*>(bng))->getAltezza()==ricerca->getAltezza() && ricerca->getAltezza()!=0 && ricerca->getLarghezza()!=0){
                (ricerca->getListaRicerca())->aggiungiElemento(bng);
            }

            //SELEZIONATO DRITTO E DIMENSIONE
            else if(dynamic_cast<bong*>(bng) && ((dynamic_cast<bong*>(bng))->getForma()==false && ricerca->getFormaB()==2) && (dynamic_cast<bong*>(bng))->getAltezza()==ricerca->getAltezza() && ricerca->getAltezza()!=0 && ricerca->getLarghezza()!=0){
                (ricerca->getListaRicerca())->aggiungiElemento(bng);
            }
        }
    }
    if(ricerca->getTipoProdotto()=="Vaporizzatore"){
        for(;inizio!=fine;++inizio) {
            prodotto* vap= &(**inizio);
            //SE SELEZIONATO SOLO SCHERMO
            if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==true && ricerca->getSchermo()==1) && ricerca->getCapienza()==0 && ricerca->getVelocita()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==false && ricerca->getSchermo()==2) && ricerca->getCapienza()==0 && ricerca->getVelocita()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATO SCHERMO E QUANTITA
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==true && ricerca->getSchermo()==1) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && ricerca->getVelocita()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==false && ricerca->getSchermo()==2) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && ricerca->getVelocita()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATO SCHERMO E VELOCITA
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==true && ricerca->getSchermo()==1) && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione() && ricerca->getCapienza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==false && ricerca->getSchermo()==2) && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione() && ricerca->getCapienza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATO SOLO QUANTITA
            else if(dynamic_cast<vaporizzatore*>(vap) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && ricerca->getSchermo()==0 && ricerca->getVelocita()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATO QUANTITA E VELOCITA
            else if(dynamic_cast<vaporizzatore*>(vap) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione()==ricerca->getVelocita() && ricerca->getSchermo()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATO SOLO VELOCITA
            else if(dynamic_cast<vaporizzatore*>(vap) && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione()==ricerca->getVelocita() && ricerca->getSchermo()==0 && ricerca->getCapienza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //SELEZIONATI TUTTI
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==true && ricerca->getSchermo()==1) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione()==ricerca->getVelocita()){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            else if(dynamic_cast<vaporizzatore*>(vap) && ((dynamic_cast<vaporizzatore*>(vap))->getSchermo()==false && ricerca->getSchermo()==2) && (dynamic_cast<vaporizzatore*>(vap))->getCapienza()==ricerca->getCapienza() && (dynamic_cast<vaporizzatore*>(vap))->getVelocitaEvaporazione()==ricerca->getVelocita()){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
            //NESSUN SELEZIONATO
            else if(dynamic_cast<vaporizzatore*>(vap) && ricerca->getVelocita()==0 && ricerca->getSchermo()==0 && ricerca->getCapienza()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(vap);
            }
        }
    }
    if(ricerca->getTipoProdotto()=="Grinder"){
        for(;inizio!=fine;++inizio) {
            prodotto* gdr= &(**inizio);
           if(dynamic_cast<grinder*>(gdr) && (dynamic_cast<grinder*>(gdr))->getNdenti()==ricerca->getNDenti() && ((dynamic_cast<grinder*>(gdr))->getRaccogliPolline()==true && ricerca->getRaccogliP()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
           else if(dynamic_cast<grinder*>(gdr) && (dynamic_cast<grinder*>(gdr))->getNdenti()==ricerca->getNDenti() && ((dynamic_cast<grinder*>(gdr))->getRaccogliPolline()==false && ricerca->getRaccogliP()==2)){
                (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
           else if(dynamic_cast<grinder*>(gdr) && ricerca->getNDenti() ==0 && ((dynamic_cast<grinder*>(gdr))->getRaccogliPolline()==true && ricerca->getRaccogliP()==1)){
                (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
           else if(dynamic_cast<grinder*>(gdr) && ricerca->getNDenti() ==0 && ((dynamic_cast<grinder*>(gdr))->getRaccogliPolline()==false && ricerca->getRaccogliP()==2)){
                (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
           else if(dynamic_cast<grinder*>(gdr) && (dynamic_cast<grinder*>(gdr))->getNdenti()==ricerca->getNDenti() && ricerca->getRaccogliP()==0){
               (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
           else if(dynamic_cast<grinder*>(gdr) && ricerca->getRaccogliP() ==0 && ricerca->getNDenti()==0){
                (ricerca->getListaRicerca())->aggiungiElemento(gdr);
           }
        }
    }
    if(ricerca->getListaRicerca()->count()==0){
        popup* avvisoNonTrovato = new popup("Warning","Prodotto cercato non presente in catalogo");
        avvisoNonTrovato->exec();
        return;
    }
}

void Controller::modifica(){
    if(catCompleto->getLista()->currentItem()==nullptr){
        popup* nessunProdottoSelezionato= new popup("Warning","Nessun prodotto selezioanto, seleziona un prodotto da modificare");
        nessunProdottoSelezionato->exec();
    }
    else{
        layoutModifica->setProdotto(catCompleto->getLista()->currentItem()->getSelezionato());
        layoutModifica->compilaModifica();
        layoutModifica->exec();
    }
    abilita();
}
void Controller::modificaRicerca() {
    if(ricerca->getListaRicerca()->currentItem()==nullptr) {
        popup* nessunProdottoSelezionato = new popup("Warning","Nessun prodotto selezionato, seleziona un prodotto da modificare!");
        nessunProdottoSelezionato->exec();
    }
    else {
        layoutModifica->setProdotto(ricerca->getListaRicerca()->currentItem()->getSelezionato());
        layoutModifica->compilaModifica();
        ricerca->resetRicerca();
        layoutModifica->exec();

    }
}
//SLOTS
void Controller::esci() {
    close();
}
void Controller::carica() {
    caricaDatiXML();
}
void Controller::tornaHome(){
    ricerca->getListaRicerca()->clear();
    ricerca->hide();
    catCompleto->show();
    inserisci->hide();
    ricerca->resetRicerca();
    inserisci->resetInserisci();
}
void Controller::vediRicerca(){
    ricerca->getListaRicerca()->clear();
    catCompleto->hide();
    ricerca->show();
    inserisci->hide();
    inserisci->resetInserisci();
}
void Controller::vediInserisci(){
    ricerca->getListaRicerca()->clear();
    catCompleto->hide();
    ricerca->hide();
    inserisci->resetInserisci();
    inserisci->show();
    ricerca->resetRicerca();
}
void Controller::vediInfoSviluppatore() {
    popup* informazioni = new popup("Informazione","Progetto realizzato da: Galtarossa Marco. Numero di matricola 1096393.\n Per qualsiasi necessità"
                                                     " contattare tramite email: \n marco.galtarossa.2@studenti.unipd.it");
    informazioni->exec();
}

void Controller::vediInfoCatalogo() {
    int totale = modello->contaCatalogo();
    int biscotti = modello->contaBiscotti();
    int cioccolata = modello->contaCioccolata();
    int infusi = modello->contaInfusi();
    int bong = modello->contaBong();
    int vapo = modello->contaVapo();
    int grinder = modello->contaGrinder();
    QString info = "Il numero totale dei prodotti in magazzino è ";
    info.append(QString::number(totale));
    info.append("\n Il numero di confezioni di biscotti disponibili è ");
    info.append(QString::number(biscotti));
    info.append("\n Il numero di confezioni di cioccolata disponibili è ");
    info.append(QString::number(cioccolata));
    info.append("\n Il numero di confezioni di infuso disponibili è ");
    info.append(QString::number(infusi));
    info.append("\n Il numero di bong disponibili è ");
    info.append(QString::number(bong));
    info.append("\n Il numero di vaporizzatori disponibili è ");
    info.append(QString::number(vapo));
    info.append("\n Il numero di grinder disponibili è ");
    info.append(QString::number(grinder));
    popup* informazioni = new popup("Informazione",info);
    informazioni->exec();
}
void Controller::inserisciNuovoProdotto(){
    prodotto* daInserire = inserisci->nuovoProdotto();
    if(daInserire==nullptr){
        popup* prodottoNull = new popup("Warning","Prodotto nullo,non puo creare un prodotto nullo!");
        prodottoNull->exec();
    }
    else if (controlloDoppione(daInserire)) {
            popup* prodottoDoppione = new popup("Warning","Prodotto doppione,hai già creato un prodotto così!");
            prodottoDoppione->exec();
    }
    else{
        modello->inserisci(daInserire);
        modello->Salva();
        catCompleto->getLista()->clear();
        caricaDati();
        inserisci->hide();
        catCompleto->show();
        popup* avvisoInserimento= new popup("Informazione","Inserimento avvenuto con successo");
        avvisoInserimento->exec();
    }
}
void Controller::salvaModifiche(){
    layoutModifica->setNuoviCampi();
    modello->Salva();
    catCompleto->getLista()->clear();
    caricaDati();
    catCompleto->show();
    ricerca->hide();
    inserisci->hide();
    layoutModifica->close();
    popup* avvisoModifica= new popup("Informazione","Modifica avvenuta con successo");
    avvisoModifica->exec();
}
void Controller::rimuoviProdotto(){
    if(catCompleto->getLista()->currentItem()==nullptr) {
            popup* nessunProdottoSelezionatoElimina = new popup("Warning","Nessun prodotto selezionato, seleziona un prodotto da eliminare!");
            nessunProdottoSelezionatoElimina->exec();
     }
     else {
        modello->rimuovi(catCompleto->getLista()->currentItem()->getSelezionato());
        modello->Salva();
        catCompleto->getLista()->clear();
        caricaDati();
        vediInfoCatalogo();
        if(modello->contaCatalogo()!=0) {
        popup* eliminatoCorrettamente = new popup("Informazione","Prodotto eliminato correttamente!");
        eliminatoCorrettamente->exec();
        }
        else {
           menu->show();
           catCompleto->hide();
        }
     }
}
void Controller::rimuoviProdottoRicerca() {
    if(ricerca->getListaRicerca()->currentItem()==nullptr) {
        popup* nessunProdottoSelezionatoElimina = new popup("Warning","Nessun prodotto selezionato, seleziona un prodotto da eliminare!");
        nessunProdottoSelezionatoElimina->exec();
    }
    else {
        modello->rimuovi(ricerca->getListaRicerca()->currentItem()->getSelezionato());
        modello->Salva();
        ricerca->resetRicerca();
        catCompleto->getLista()->clear();
        caricaDati();
        tornaHome();
        if(modello->contaCatalogo()!=0) {
        popup* eliminatoCorrettamente = new popup("Informazione","Prodotto eliminato correttamente!");
        eliminatoCorrettamente->exec();
        }
        else {
            ricerca->show();
            catCompleto->hide();
        }
    }
}
