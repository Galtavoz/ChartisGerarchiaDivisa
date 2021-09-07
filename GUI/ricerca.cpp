#include"ricerca.h"


Ricerca::Ricerca(QWidget* p):
    QWidget(p),
    lableTipoProdotto(new QLabel(this)),
    tipoProdotto(new QComboBox(this)),
//CONSUMABILI
    lableTipoFarine(new QLabel(this)),
    grano(new QCheckBox(this)),
    riso(new QCheckBox(this)),
    mandorle(new QCheckBox(this)),
    castagne(new QCheckBox(this)),
    amaranto(new QCheckBox(this)),

    lableTipoGocce(new QLabel(this)),
    senza(new QCheckBox(this)),
    latte(new QCheckBox(this)),
    fondente(new QCheckBox(this)),
    bianco(new QCheckBox(this)),

    lableLvFondenza(new QLabel(this)),
    nessuna(new QCheckBox(this)),
    bassa(new QCheckBox(this)),
    media(new QCheckBox(this)),
    alta(new QCheckBox(this)),

    lableTipoGranella(new QLabel(this)),
    cocco(new QCheckBox(this)),
    noce(new QCheckBox(this)),
    mandorla(new QCheckBox(this)),
    nocciola(new QCheckBox(this)),

    lableFormaC(new QLabel(this)),
    formaC(new QComboBox(this)),

    lableTipoAroma1(new QLabel(this)),
    aroma1(new QComboBox(this)),
    lableTipoAroma2(new QLabel(this)),
    aroma2(new QComboBox(this)),
    lableSfuso(new QLabel(this)),
    sfuso(new QComboBox(this)),
//NON CONSUMABILI
    lableTipoBong(new QLabel(this)),
    backer(new QCheckBox(this)),
    dritto(new QCheckBox(this)),
    qualsiasi(new QCheckBox(this)),
    lableTipoDimensioni(new QLabel(this)),
    dimBacker(new QComboBox(this)),
    dimDritto(new QComboBox(this)),

    lableSchermo(new QLabel(this)),
    schermo(new QComboBox(this)),
    lableCapienza(new QLabel(this)),
    capienza(new QComboBox(this)),
    lableVelocita(new QLabel(this)),
    velocita(new QComboBox(this)),

    lableNDenti(new QLabel(this)),
    ndenti(new QComboBox(this)),
    lableRaccPoll(new QLabel(this)),
    raccoglipoll(new QComboBox(this)),

    cerca(new QPushButton(this)),
    prodotto(new elementoWidget(this)),
    modifica(new QPushButton(this)),
    rimuovi(new QPushButton(this)){


     QVBoxLayout* layoutRic         = new QVBoxLayout(this);
     QHBoxLayout* layoutFarine      = new QHBoxLayout();
     QHBoxLayout* layoutGocce       = new QHBoxLayout();
     QHBoxLayout* layoutFondenza    = new QHBoxLayout();
     QHBoxLayout* layoutGranella    = new QHBoxLayout();
     QHBoxLayout* layoutFormaC      = new QHBoxLayout();
     QHBoxLayout* layoutAroma1      = new QHBoxLayout();
     QHBoxLayout* layoutAroma2      = new QHBoxLayout();
     QHBoxLayout* layoutSfuso       = new QHBoxLayout();
     QHBoxLayout* layoutFormaB      = new QHBoxLayout();
     QHBoxLayout* layoutDimensioni  = new QHBoxLayout();
     QHBoxLayout* layoutSchermo     = new QHBoxLayout();
     QHBoxLayout* layoutCapienza    = new QHBoxLayout();
     QHBoxLayout* layoutVelocita    = new QHBoxLayout();
     QHBoxLayout* layoutNDenti      = new QHBoxLayout();
     QHBoxLayout* layoutRaccpolline = new QHBoxLayout();
     QHBoxLayout* layoutBottoni     = new QHBoxLayout();

     prodotto->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
     prodotto->QAbstractScrollArea::setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );

     layoutRic->addWidget(lableTipoProdotto);
     layoutRic->addWidget(tipoProdotto);
     layoutRic->addLayout(layoutFarine);
     layoutRic->addLayout(layoutGocce);
     layoutRic->addLayout(layoutFondenza);
     layoutRic->addLayout(layoutGranella);
     layoutRic->addLayout(layoutFormaC);
     layoutRic->addLayout(layoutAroma1);
     layoutRic->addLayout(layoutAroma2);
     layoutRic->addLayout(layoutSfuso);
     layoutRic->addLayout(layoutFormaB);
     layoutRic->addLayout(layoutDimensioni);
     layoutRic->addLayout(layoutSchermo);
     layoutRic->addLayout(layoutCapienza);
     layoutRic->addLayout(layoutVelocita);
     layoutRic->addLayout(layoutNDenti);
     layoutRic->addLayout(layoutRaccpolline);
     layoutRic->addWidget(cerca);
     layoutRic->addWidget(prodotto);
     layoutRic->addLayout(layoutBottoni);

     layoutFarine->addWidget(lableTipoFarine);
     layoutFarine->addWidget(grano);
     layoutFarine->addWidget(riso);
     layoutFarine->addWidget(mandorle);
     layoutFarine->addWidget(castagne);
     layoutFarine->addWidget(amaranto);

     layoutGocce->addWidget(lableTipoGocce);
     layoutGocce->addWidget(senza);
     layoutGocce->addWidget(latte);
     layoutGocce->addWidget(fondente);
     layoutGocce->addWidget(bianco);

     layoutFondenza->addWidget(lableLvFondenza);
     layoutFondenza->addWidget(nessuna);
     layoutFondenza->addWidget(bassa);
     layoutFondenza->addWidget(media);
     layoutFondenza->addWidget(alta);

     layoutGranella->addWidget(lableTipoGranella);
     layoutGranella->addWidget(cocco);
     layoutGranella->addWidget(noce);
     layoutGranella->addWidget(mandorla);
     layoutGranella->addWidget(nocciola);

     layoutFormaC->addWidget(lableFormaC);
     layoutFormaC->addWidget(formaC);

     layoutAroma1->addWidget(lableTipoAroma1);
     layoutAroma1->addWidget(aroma1);
     layoutAroma2->addWidget(lableTipoAroma2);
     layoutAroma2->addWidget(aroma2);
     layoutSfuso->addWidget(lableSfuso);
     layoutSfuso->addWidget(sfuso);

     layoutFormaB->addWidget(lableTipoBong);
     layoutFormaB->addWidget(backer);
     layoutFormaB->addWidget(dritto);
     layoutFormaB->addWidget(qualsiasi);

     layoutDimensioni->addWidget(lableTipoDimensioni);
     layoutDimensioni->addWidget(dimBacker);
     layoutDimensioni->addWidget(dimDritto);

     layoutSchermo->addWidget(lableSchermo);
     layoutSchermo->addWidget(schermo);
     layoutCapienza->addWidget(lableCapienza);
     layoutCapienza->addWidget(capienza);
     layoutVelocita->addWidget(lableVelocita);
     layoutVelocita->addWidget(velocita);

     layoutNDenti->addWidget(lableNDenti);
     layoutNDenti->addWidget(ndenti);
     layoutRaccpolline->addWidget(lableRaccPoll);
     layoutRaccpolline->addWidget(raccoglipoll);

     layoutBottoni->addWidget(modifica);
     layoutBottoni->addWidget(rimuovi);

     prodotto->show();
     modifica->show();
     rimuovi->show();
     lableTipoProdotto->show();
     cerca->show();
     lableTipoProdotto->setText("Seleziona la tipologia di prodotto da ricercare :");
     cerca->setText("Cerca");
     QList<QString> prodotti={"Seleziona prodotto...","Biscotti","Cioccolata","Infusi","Bong","Vaporizzatore","Grinder"};
     for(int i=0;i<prodotti.length();++i)
             tipoProdotto->addItem(prodotti[i]);
      tipoProdotto->setCurrentIndex(0);

      lableTipoFarine->hide();
      grano->hide();
      riso->hide();
      mandorle->hide();
      castagne->hide();
      amaranto->hide();

      lableTipoGocce->hide();
      senza->hide();
      latte->hide();
      fondente->hide();
      bianco->hide();

      lableLvFondenza->hide();
      nessuna->hide();
      bassa->hide();
      media->hide();
      alta->hide();

      lableTipoGranella->hide();
      cocco->hide();
      noce->hide();
      mandorla->hide();
      nocciola->hide();

      lableFormaC->hide();
      formaC->hide();

      lableTipoAroma1->hide();
      aroma1->hide();
      lableTipoAroma2->hide();
      aroma2->hide();
      lableSfuso->hide();
      sfuso->hide();

      lableTipoBong->hide();
      backer->hide();
      dritto->hide();
      qualsiasi->hide();
      lableTipoDimensioni->hide();
      dimBacker->hide();
      dimDritto->hide();

      lableSchermo->hide();
      schermo->hide();
      lableCapienza->hide();
      capienza->hide();
      lableVelocita->hide();
      velocita->hide();

      lableNDenti->hide();
      ndenti->hide();
      lableRaccPoll->hide();
      raccoglipoll->hide();


      lableTipoFarine->setText("Seleziona la tipologia di farina:");
      grano->setText("Grano");
      riso->setText("Riso");
      mandorle->setText("Mandorle");
      castagne->setText("Castagne");
      amaranto->setText("Amaranto");

      lableTipoGocce->setText("Seleziona la tipologia di gocce :");
      senza->setText("Senza");
      latte->setText("Latte");
      fondente->setText("Fondente");
      bianco->setText("Bianco");

      lableLvFondenza->setText("Seleziona il livello di fondenza :");
      nessuna->setText("0%");
      bassa->setText("50%");
      media->setText("75%");
      alta->setText("90%");

      lableTipoGranella->setText("Seleziona la tipologia di granella :");
      cocco->setText("Cocco");
      noce->setText("Noce");
      mandorla->setText("Mandorla");
      nocciola->setText("Nocciola");

      lableFormaC->setText("Seleziona la tipologia di forma :");
      QList<QString> listaFormaC={"Qualsiasi","Stecche","Praline"};
      for(int i=0;i<listaFormaC.length();++i)
          formaC->addItem(listaFormaC[i]);
      formaC->setCurrentIndex(0);

      lableTipoAroma1->setText("Seleziona l'aroma da ricercare: ");
      QList<QString> listaaromi={"Qualsiasi","Albicocca","Limone","Liquirizia","Menta","Zenzero"};
      for(int i=0;i<listaaromi.length();++i)
          aroma1->addItem(listaaromi[i]);
      aroma1->setCurrentIndex(0);
      lableTipoAroma2->setText("Seleziona il secondo aroma da ricercare, se desiderato, senno lasciare 'Nessun aroma': ");
      QList<QString> listaaromi1={"Nessun aroma","Albicocca","Limone","Liquirizia","Menta","Zenzero"};
      for(int i=0;i<listaaromi1.length();++i)
          aroma2->addItem(listaaromi1[i]);
      aroma2->setCurrentIndex(0);
      lableSfuso->setText("Seleziona se vuoi ricercare un aroma sfuso oppure no.");
      QList<QString> listaSfuso={"Qualsiasi","Sfuso","Non sfuso"};
      for(int i=0;i<listaSfuso.length();++i)
          sfuso->addItem(listaSfuso[i]);
      sfuso->setCurrentIndex(0);


      lableTipoBong->setText("Seleziona la forma del bong");
      backer->setText("Backer");
      dritto->setText("Dritto");
      qualsiasi->setText("Qualsiasi");
      lableTipoDimensioni->setText("Seleziona le dimensioni del bong");
      QList<QString> listaDimB={"Qualsiasi","33X4.6 cm","45X4.6 cm"};
      for(int i=0;i<listaDimB.length();++i)
          dimBacker->addItem(listaDimB[i]);
      QList<QString> listaDimD={"Qualsiasi","24X3.1 cm","32X4.1 cm","37X5.3 cm","46X6.7 cm"};
      for(int i=0;i<listaDimD.length();++i)
          dimDritto->addItem(listaDimD[i]);

      lableSchermo->setText("Selezionare se il vaporizzatore ha ricercare ha schermo o meno");
      QList<QString> listaSchermo={"Qualsiasi","Schermo","No schermo"};
      for(int i=0;i<listaSchermo.length();++i)
          schermo->addItem(listaSchermo[i]);
      schermo->setCurrentIndex(0);
      lableCapienza->setText("Selezionare la quantita massima di carico del vaporizzatore");
      QList<QString> listaCapienza={"Qualsiasi","1 gr","2 gr","3 gr","4 gr"};
      for(int i=0;i<listaCapienza.length();++i)
          capienza->addItem(listaCapienza[i]);
      capienza->setCurrentIndex(0);
      lableVelocita->setText("Selezionare il livello di velocita il cui il prodotto fa evaporare l'erba");
      QList<QString> listaVelocita={"Qualsiasi","Lv 1","Lv 2","Lv 3"};
      for(int i=0;i<listaVelocita.length();++i)
          velocita->addItem(listaVelocita[i]);
      velocita->setCurrentIndex(0);

      lableNDenti->setText("Seleziona il numero di denti presenti nel grider :");
      QList<QString> listaDenti={"Qualsiasi","6","12","24","30","36"};
      for(int i=0;i<listaDenti.length();++i)
          ndenti->addItem(listaDenti[i]);
      lableRaccPoll->setText("Seleziona se il grinder ha o no il raccogli polline");
      QList<QString> raccogliP={"Qualsiasi","Con raccogli polline","Senza raccogli polline"};
      for(int i=0;i<raccogliP.length();++i)
          raccoglipoll->addItem(raccogliP[i]);
      raccoglipoll->setCurrentIndex(0);;

      modifica->setText("Modifica");
      rimuovi->setText("Rimuovi");


      lableTipoProdotto->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoProdotto->setWordWrap(true);

      lableTipoFarine->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoFarine->setWordWrap(true);

      lableTipoGocce->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoGocce->setWordWrap(true);

      lableLvFondenza->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableLvFondenza->setWordWrap(true);

      lableTipoGranella->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoGranella->setWordWrap(true);

      lableFormaC->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableFormaC->setWordWrap(true);

      lableTipoAroma1->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoAroma1->setWordWrap(true);
      lableTipoAroma2->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoAroma2->setWordWrap(true);
      lableSfuso->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableSfuso->setWordWrap(true);

      lableTipoBong->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoBong->setWordWrap(true);

      lableTipoDimensioni->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableTipoDimensioni->setWordWrap(true);

      lableSchermo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableSchermo->setWordWrap(true);
      lableCapienza->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableCapienza->setWordWrap(true);
      lableVelocita->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableVelocita->setWordWrap(true);

      lableNDenti->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableNDenti->setWordWrap(true);
      lableRaccPoll->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      lableRaccPoll->setWordWrap(true);



      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteBiscotti()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteCioccolato()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteInfusi()));

      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteFormaBong()));
      connect(backer,SIGNAL(toggled(bool)),this,SLOT(scelteDimensioniB(bool)));
      connect(dritto,SIGNAL(toggled(bool)),this,SLOT(scelteDimensioniD(bool)));
      connect(qualsiasi,SIGNAL(toggled(bool)),this,SLOT(checkQualsiasi(bool)));

      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(nessunProdSel()));

      //CONNECT CHECKFARINE
      connect(grano,SIGNAL(toggled(bool)),this,SLOT(checkGrano(bool)));
      connect(riso,SIGNAL(toggled(bool)),this,SLOT(checkRiso(bool)));
      connect(mandorle,SIGNAL(toggled(bool)),this,SLOT(checkMandorle(bool)));
      connect(castagne,SIGNAL(toggled(bool)),this,SLOT(checkCastagne(bool)));
      connect(amaranto,SIGNAL(toggled(bool)),this,SLOT(checkAmaranto(bool)));
      //CONNECT CHECKGOCCE
      connect(senza,SIGNAL(toggled(bool)),this,SLOT(checkSenza(bool)));
      connect(latte,SIGNAL(toggled(bool)),this,SLOT(checkLatte(bool)));
      connect(fondente,SIGNAL(toggled(bool)),this,SLOT(checkFondente(bool)));
      connect(bianco,SIGNAL(toggled(bool)),this,SLOT(checkBianco(bool)));
      //CONNECT CHECKFONDENZA
      connect(nessuna,SIGNAL(toggled(bool)),this,SLOT(checkNessuna(bool)));
      connect(bassa,SIGNAL(toggled(bool)),this,SLOT(checkBassa(bool)));
      connect(media,SIGNAL(toggled(bool)),this,SLOT(checkMedia(bool)));
      connect(alta,SIGNAL(toggled(bool)),this,SLOT(checkAlta(bool)));
      //CONNECT CHECKGRANELLA
      connect(cocco,SIGNAL(toggled(bool)),this,SLOT(checkCocco(bool)));
      connect(noce,SIGNAL(toggled(bool)),this,SLOT(checkNoce(bool)));
      connect(mandorla,SIGNAL(toggled(bool)),this,SLOT(checkMandorla(bool)));
      connect(nocciola,SIGNAL(toggled(bool)),this,SLOT(checkNocciola(bool)));

      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteVapo()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteGrinder()));

      connect(backer,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
      connect(dritto,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
}
void Ricerca::resetRicerca(){
    grano->setChecked(false);
    riso->setChecked(false);
    mandorle->setChecked(false);
    castagne->setChecked(false);
    amaranto->setChecked(false);
    senza->setChecked(false);
    latte->setChecked(false);
    fondente->setChecked(false);
    bianco->setChecked(false);
    nessuna->setChecked(false);
    bassa->setChecked(false);
    media->setChecked(false);
    alta->setChecked(false);
    cocco->setChecked(false);
    noce->setChecked(false);
    mandorla->setChecked(false);
    nocciola->setChecked(false);
    backer->setChecked(false);
    dritto->setChecked(false);
    qualsiasi->setChecked(false);


    grano->setEnabled(true);
    riso->setEnabled(true);
    mandorle->setEnabled(true);
    castagne->setEnabled(true);
    amaranto->setEnabled(true);
    senza->setEnabled(true);
    latte->setEnabled(true);
    fondente->setEnabled(true);
    bianco->setEnabled(true);
    nessuna->setEnabled(true);
    bassa->setEnabled(true);
    media->setEnabled(true);
    alta->setEnabled(true);;
    cocco->setEnabled(true);
    noce->setEnabled(true);
    mandorla->setEnabled(true);
    nocciola->setEnabled(true);
    backer->setEnabled(true);
    dritto->setEnabled(true);
    qualsiasi->setEnabled(true);


    tipoProdotto->setCurrentIndex(0);
    formaC->setCurrentIndex(0);
    aroma1->setCurrentIndex(0);
    aroma2->setCurrentIndex(0);
    sfuso->setCurrentIndex(0);
    dimBacker->setCurrentIndex(0);
    dimDritto->setCurrentIndex(0);
    schermo->setCurrentIndex(0);
    capienza->setCurrentIndex(0);
    velocita->setCurrentIndex(0);
    ndenti->setCurrentIndex(0);
    raccoglipoll->setCurrentIndex(0);

}

void Ricerca::scelteBiscotti(){
    if(tipoProdotto->currentText()=="Biscotti"){
        getListaRicerca()->clear();
        //FARINE
        lableTipoFarine->show();
        grano->show();
        riso->show();
        mandorle->show();
        castagne->show();
        amaranto->show();
        //GOCCE
        lableTipoGocce->show();
        senza->show();
        latte->show();
        fondente->show();
        bianco->show();

    }
    else{
        lableTipoFarine->hide();
        grano->hide();
        riso->hide();
        mandorle->hide();
        castagne->hide();
        amaranto->hide();

        lableTipoGocce->hide();
        senza->hide();
        latte->hide();
        fondente->hide();
        bianco->hide();
    }
}

void Ricerca::scelteCioccolato(){
    if(tipoProdotto->currentText()=="Cioccolata"){
        getListaRicerca()->clear();
        lableLvFondenza->show();
        nessuna->show();
        bassa->show();
        media->show();
        alta->show();

        lableTipoGranella->show();
        cocco->show();
        noce->show();
        mandorla->show();
        nocciola->show();

        lableFormaC->show();
        formaC->show();
    }
    else{
        lableLvFondenza->hide();
        nessuna->hide();
        bassa->hide();
        media->hide();
        alta->hide();

        lableTipoGranella->hide();
        cocco->hide();
        noce->hide();
        mandorla->hide();
        nocciola->hide();

        lableFormaC->hide();
        formaC->hide();
    }
}

void Ricerca::scelteInfusi(){
    if(tipoProdotto->currentText()=="Infusi"){
        getListaRicerca()->clear();
        lableTipoAroma1->show();
        aroma1->show();
        lableTipoAroma2->show();
        aroma2->show();
        lableSfuso->show();
        sfuso->show();
    }
    else{
        lableTipoAroma1->hide();
        aroma1->hide();
        lableTipoAroma2->hide();
        aroma2->hide();
        lableSfuso->hide();
        sfuso->hide();
    }
}

void Ricerca::scelteFormaBong(){
    if(tipoProdotto->currentText()=="Bong"){
        getListaRicerca()->clear();
        lableTipoBong->show();
        backer->show();
        dritto->show();
        qualsiasi->show();
    }
    else{
        lableTipoBong->hide();
        backer->hide();
        dritto->hide();
        qualsiasi->hide();
        lableTipoDimensioni->hide();
        dimBacker->hide();
        dimDritto->hide();
    }
}

void Ricerca::scelteDimensioniB(bool flag){
    lableTipoDimensioni->show();
    if(flag){
        dritto->setEnabled(false);
        qualsiasi->setEnabled(false);
    }
    else{
        dritto->setEnabled(true);
        qualsiasi->setEnabled(true);
    }
    dimBacker->show();
    dimDritto->hide();

}
void Ricerca::scelteDimensioniD(bool flag){
    lableTipoDimensioni->show();
    if(flag){
        backer->setEnabled(false);
        qualsiasi->setEnabled(false);
    }
    else {
        backer->setEnabled(true);
        qualsiasi->setEnabled(true);
    }
    dimBacker->hide();
    dimDritto->show();
}
void Ricerca::scelteVapo(){
    if(tipoProdotto->currentText()=="Vaporizzatore"){
        getListaRicerca()->clear();
        lableSchermo->show();
        schermo->show();
        lableCapienza->show();
        capienza->show();
        lableVelocita->show();
        velocita->show();
    }
    else{
        lableSchermo->hide();
        schermo->hide();
        lableCapienza->hide();
        capienza->hide();
        lableVelocita->hide();
        velocita->hide();
    }
}
void Ricerca::scelteGrinder(){
    if(tipoProdotto->currentText()=="Grinder"){
        getListaRicerca()->clear();
        lableNDenti->show();
        ndenti->show();
        lableRaccPoll->show();
        raccoglipoll->show();
    }
    else{
        lableNDenti->hide();
        ndenti->hide();
        lableRaccPoll->hide();
        raccoglipoll->hide();
    }
}
void Ricerca::nessunProdSel(){
    if(tipoProdotto->currentText()=="Seleziona prodotto..."){
        getListaRicerca()->clear();
    }
}
void Ricerca::resetDim(){
    if(backer->isEnabled()==true && dritto->isEnabled()==true){
        dimBacker->hide();
        dimDritto->hide();
        lableTipoDimensioni->hide();
        getListaRicerca()->clear();
        dimBacker->setCurrentIndex(0);
        dimDritto->setCurrentIndex(0);
    }
}
//CHECKFARINE
void Ricerca::checkGrano(bool f){
    if(f){
        riso->setEnabled(false);
        mandorle->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Ricerca::checkRiso(bool f){
    if(f){
        grano->setEnabled(false);
        mandorle->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        grano->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Ricerca::checkMandorle(bool f){
    if(f){
        grano->setEnabled(false);
        riso->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        grano->setEnabled(true);
        riso->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Ricerca::checkCastagne(bool f){
    if(f){
        grano->setEnabled(false);
        riso->setEnabled(false);
        mandorle->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        grano->setEnabled(true);
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Ricerca::checkAmaranto(bool f){
    if(f){
        grano->setEnabled(false);
        riso->setEnabled(false);
        castagne->setEnabled(false);
        mandorle->setEnabled(false);
    }
    else{
        grano->setEnabled(true);
        riso->setEnabled(true);
        castagne->setEnabled(true);
        mandorle->setEnabled(true);
    }
}
//CHECKGOCCE
void Ricerca::checkSenza(bool f){
    if(f){
        latte->setEnabled(false);
        fondente->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        latte->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Ricerca::checkLatte(bool f){
    if(f){
        senza->setEnabled(false);
        fondente->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        senza->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Ricerca::checkFondente(bool f){
    if(f){
        senza->setEnabled(false);
        latte->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        senza->setEnabled(true);
        latte->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Ricerca::checkBianco(bool f){
    if(f){
        senza->setEnabled(false);
        latte->setEnabled(false);
        fondente->setEnabled(false);
    }
    else{
        senza->setEnabled(true);
        latte->setEnabled(true);
        fondente->setEnabled(true);
    }
}
//CHECKFONDENZA
void Ricerca::checkNessuna(bool f){
    if(f){
        bassa->setEnabled(false);
        media->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        bassa->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Ricerca::checkBassa(bool f){
    if(f){
        nessuna->setEnabled(false);
        media->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        nessuna->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Ricerca::checkMedia(bool f){
    if(f){
        nessuna->setEnabled(false);
        bassa->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Ricerca::checkAlta(bool f){
    if(f){
        nessuna->setEnabled(false);
        bassa->setEnabled(false);
        media->setEnabled(false);
    }
    else{
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        media->setEnabled(true);
    }
}
//CHECKGRANELLA
void Ricerca::checkCocco(bool f){
    if(f){
        noce->setEnabled(false);
        mandorla->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        noce->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Ricerca::checkNoce(bool f){
    if(f){
        cocco->setEnabled(false);
        mandorla->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        cocco->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Ricerca::checkMandorla(bool f){
    if(f){
        cocco->setEnabled(false);
        noce->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        cocco->setEnabled(true);
        noce->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Ricerca::checkNocciola(bool f){
    if(f){
        cocco->setEnabled(false);
        noce->setEnabled(false);
        mandorla->setEnabled(false);
    }
    else{
        cocco->setEnabled(true);
        noce->setEnabled(true);
        mandorla->setEnabled(true);
    }
}
void Ricerca::checkQualsiasi(bool f){
    if(f){
        dritto->setEnabled(false);
        backer->setEnabled(false);
    }
    else{
        dritto->setEnabled(true);
        backer->setEnabled(true);
    }
}

//GET
QPushButton* Ricerca::getCercaBut() const {
    return  cerca;
}
std::string Ricerca::getTipoProdotto() const{
    if(tipoProdotto->currentText()=="Biscotti"){
        return "Biscotti";
    }
    else if(tipoProdotto->currentText()=="Cioccolata"){
        return "Cioccolata";
    }
    else if(tipoProdotto->currentText()=="Infusi"){
        return "Infusi";
    }
    else if(tipoProdotto->currentText()=="Bong"){
        return "Bong";
    }
    else if(tipoProdotto->currentText()=="Vaporizzatore"){
        return "Vaporizzatore";
    } else if(tipoProdotto->currentText()=="Grinder"){
        return "Grinder";
    }
    else return "Seleziona prodotto...";
}
int Ricerca::getTipoFarina() const{
    if(grano->isChecked()==true){
        return 1;
    }
    else if(riso->isChecked()==true){
        return 2;
    }
    else if(mandorle->isChecked()==true){
        return 3;
    }
    else if(castagne->isChecked()==true){
        return 4;
    }
    else if(amaranto->isChecked()==true){
        return 5;
    }
    else return 0;
}
int Ricerca::getTipoGocce() const{
    if(senza->isChecked()==true){
        return 4;
    }
    else if(latte->isChecked()==true){
        return 1;
    }
    else if(fondente->isChecked()==true){
        return 2;
    }
    else if(bianco->isChecked()==true){
        return 3;
    }
    else return 0;
}
int Ricerca::getLvFondenza() const{
    if(nessuna->isChecked()==true){
        return 1;
    }
    else if(bassa->isChecked()==true){
        return 2;
    }
    else if(media->isChecked()==true){
        return 3;
    }
    else if(alta->isChecked()==true){
        return 4;
    }
    else return 0;
}
int Ricerca::getTipoGranella() const{
    if(cocco->isChecked()==true){
        return 1;
    }
    else if(noce->isChecked()==true){
        return 2;
    }
    else if(mandorla->isChecked()==true){
        return 3;
    }
    else if(nocciola->isChecked()==true){
        return 4;
    }
    else return 0;
}
int Ricerca::getFormaC() const{
    if(formaC->currentText()=="Stecche") return 1;
    else if(formaC->currentText()=="Praline") return 2;
    else return 0;
}
std::vector<std::string> Ricerca::getAroma() const{
    std::vector<std::string> aromaFinale;
    if(aroma1->currentText().toStdString()!="Qualsiasi"){
        aromaFinale.push_back(aroma1->currentText().toStdString());
        if(aroma2->currentText().toStdString()!="Nessun aroma" && aroma2->currentText()!=aroma1->currentText())
            aromaFinale.push_back(aroma2->currentText().toStdString());
    }
    else aromaFinale.push_back("0");
    return aromaFinale;

}
int Ricerca::getSfuso() const{
    if(sfuso->currentText()=="Sfuso") return 1;
    else if(sfuso->currentText()=="Non sfuso") return 2;
    else return 0;
}
int Ricerca::getFormaB() const{
    if(backer->isChecked()==true){
        return 1 ;
    }
    else if(dritto->isChecked()==true){
        return 2;
    }
    else return 0;
}
int Ricerca::getAltezza() const{
    if(dimBacker->currentText()=="33X4.6 cm"){
        return 5;
    }
    else if(dimBacker->currentText()=="45X4.6 cm"){
        return 6;
    }
    else if(dimDritto->currentText()=="24X3.1 cm"){
        return 1;
    }
    else if(dimDritto->currentText()=="32X4.1 cm"){
        return 2;
    }
    else if(dimDritto->currentText()=="37X5.3 cm"){
        return 3;
    }
    else if(dimDritto->currentText()=="46X6.7 cm"){
        return 4;
    }
    else return 0;
}
double Ricerca::getLarghezza() const{
    if(dimBacker->currentText()=="33X4.6 cm" || dimBacker->currentText()=="45X4.6 cm"){
        return 5;
    }
    else if(dimDritto->currentText()=="24X3.1 cm"){
        return 1;
    }
    else if(dimDritto->currentText()=="32X4.1 cm"){
        return 2;
    }
    else if(dimDritto->currentText()=="37X5.3 cm"){
        return 3;
    }
    else if(dimDritto->currentText()=="46X6.7 cm"){
        return 4;
    }
    else return 0;
}
int Ricerca::getVelocita() const{
    if(velocita->currentText()=="Lv 1"){
        return 1 ;
    }
    else if(velocita->currentText()=="Lv 2"){
        return 2;
    }
    else if(velocita->currentText()=="Lv 3"){
        return 3;
    }
    else return 0;
}
int Ricerca::getCapienza() const{
    if(capienza->currentText()=="1 gr"){
        return 1 ;
    }
    else if(capienza->currentText()=="2 gr"){
        return 2;
    }
    else if(capienza->currentText()=="3 gr"){
        return 3;
    }
    else if(capienza->currentText()=="4 gr"){
        return 4;
    }
    return 0;
}
int Ricerca::getSchermo() const{
    if(schermo->currentText()=="Schermo") return 1;
    else if(schermo->currentText()=="No schermo") return 2;
    else return 0;
}
int Ricerca::getNDenti() const{
    if(ndenti->currentText()=="6"){
        return 6 ;
    }
    else if(ndenti->currentText()=="12"){
        return 12;
    }
    else if(ndenti->currentText()=="24"){
        return 24;
    }
    else if(ndenti->currentText()=="30"){
        return 30;
    }
    else if(ndenti->currentText()=="36"){
        return 36;
    }
    else return 0;
}
int Ricerca::getRaccogliP() const{
    if(raccoglipoll->currentText()=="Con raccogli polline") return 1;
    else if(raccoglipoll->currentText()=="Senza raccogli polline") return 2;
    else return 0;
}
elementoWidget* Ricerca::getListaRicerca() const{
    return prodotto;
}
QPushButton* Ricerca::getRimuoviRicerca() const {
    return rimuovi;
}
QPushButton* Ricerca::getModificaRicerca() const {
    return modifica;
}
