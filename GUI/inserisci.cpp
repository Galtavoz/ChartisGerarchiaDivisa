#include "inserisci.h"

Inserisci::Inserisci(QWidget* p):
    QWidget(p),
    labelNomeRegalo(new QLabel(this)),
    nome(new QLineEdit(this)),
    regalo(new QCheckBox(this)),
    labelIngredienti(new QLabel(this)),
    labelPeso(new QLabel(this)),
    peso(new QLineEdit(this)),
    labelHemp(new QLabel(this)),
    hempI(new QCheckBox(this)),
    hempS(new QCheckBox(this)),
    labelProd(new QLabel(this)),
    prodI(new QCheckBox(this)),
    prodO(new QCheckBox(this)),
    labelColori(new QLabel(this)),
    colori(new QComboBox(this)),
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


    inserisci(new QPushButton(this)),
    labelObbligatorio(new QLabel(this))
    {



     QVBoxLayout* layoutIns         = new QVBoxLayout(this);
     QHBoxLayout* layoutNomeRegalo  = new QHBoxLayout();
     QHBoxLayout* layoutPeso        = new QHBoxLayout();
     QHBoxLayout* layoutHemp        = new QHBoxLayout();
     QHBoxLayout* layoutProduzione  = new QHBoxLayout();
     QHBoxLayout* layoutColori      = new QHBoxLayout();
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




     layoutIns->addWidget(lableTipoProdotto);
     layoutIns->addWidget(tipoProdotto);
     layoutIns->addLayout(layoutNomeRegalo);
     layoutIns->addWidget(labelIngredienti);

     layoutIns->addLayout(layoutPeso);
     layoutIns->addLayout(layoutHemp);
     layoutIns->addLayout(layoutProduzione);
     layoutIns->addLayout(layoutColori);

     layoutIns->addLayout(layoutFarine);
     layoutIns->addLayout(layoutGocce);
     layoutIns->addLayout(layoutFondenza);
     layoutIns->addLayout(layoutGranella);
     layoutIns->addLayout(layoutFormaC);
     layoutIns->addLayout(layoutAroma1);
     layoutIns->addLayout(layoutAroma2);
     layoutIns->addLayout(layoutSfuso);
     layoutIns->addLayout(layoutFormaB);
     layoutIns->addLayout(layoutDimensioni);
     layoutIns->addLayout(layoutSchermo);
     layoutIns->addLayout(layoutCapienza);
     layoutIns->addLayout(layoutVelocita);
     layoutIns->addLayout(layoutNDenti);
     layoutIns->addLayout(layoutRaccpolline);


     layoutIns->addWidget(inserisci);
     layoutIns->addWidget(labelObbligatorio);

     layoutNomeRegalo->addWidget(labelNomeRegalo);
     layoutNomeRegalo->addWidget(nome);
     layoutNomeRegalo->addWidget(regalo);

     layoutPeso->addWidget(labelPeso);
     layoutPeso->addWidget(peso);

     layoutHemp->addWidget(labelHemp);
     layoutHemp->addWidget(hempI);
     layoutHemp->addWidget(hempS);

     layoutProduzione->addWidget(labelProd);
     layoutProduzione->addWidget(prodI);
     layoutProduzione->addWidget(prodO);

     layoutColori->addWidget(labelColori);
     layoutColori->addWidget(colori);

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


     lableTipoProdotto->show();
     inserisci->show();
     lableTipoProdotto->setText("Seleziona la tipologia di prodotto da inserire :");
     inserisci->setText("Inserisci");
     labelObbligatorio->setText("* Campi Obbligatori");
     labelObbligatorio->hide();
     QList<QString> prodotti={"Seleziona prodotto...","Biscotti","Cioccolata","Infusi","Bong","Vaporizzatore","Grinder"};
     for(int i=0;i<prodotti.length();++i)
             tipoProdotto->addItem(prodotti[i]);
      tipoProdotto->setCurrentIndex(0);

      labelNomeRegalo->hide();
      nome->hide();
      regalo->hide();
      labelIngredienti->hide();
      labelPeso->hide();
      peso->hide();
      labelHemp->hide();
      hempI->hide();
      hempS->hide();
      labelProd->hide();
      prodI->hide();
      prodO->hide();
      labelColori->hide();
      colori->hide();

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

      labelNomeRegalo->setText("Inserisci il nome * e spunta se confezione regalo");
      regalo->setText("Confezione Regalo?");
      labelPeso->setText("Peso in kg(per i decimali separare con un punto es. 0.500) *:");
      labelHemp->setText("Tipologia di hemp *:");
      hempI->setText("Indica");
      hempS->setText("Sativa");
      prodI->setText("Indoor");
      prodO->setText("Outdoor");
      labelProd->setText("Tipo di produzione *:");
      labelColori->setText("Colore:");
      QList<QString> listaColori={"Bianco","Blu","Verde","Arancione","Viola","Fucsia","Oro","Giallo"};
      for(int i=0;i<listaColori.length();++i)
              colori->addItem(listaColori[i]);
       colori->setCurrentIndex(0);

      lableTipoFarine->setText("Seleziona la tipologia di farina *:");
      grano->setText("Grano");
      riso->setText("Riso");
      mandorle->setText("Mandorle");
      castagne->setText("Castagne");
      amaranto->setText("Amaranto");

      lableTipoGocce->setText("Seleziona la tipologia di gocce *:");
      senza->setText("Senza");
      latte->setText("Latte");
      fondente->setText("Fondente");
      bianco->setText("Bianco");

      lableLvFondenza->setText("Seleziona il livello di fondenza *:");
      nessuna->setText("0%");
      bassa->setText("50%");
      media->setText("75%");
      alta->setText("90%");

      lableTipoGranella->setText("Seleziona la tipologia di granella *:");
      cocco->setText("Cocco");
      noce->setText("Noce");
      mandorla->setText("Mandorla");
      nocciola->setText("Nocciola");

      lableFormaC->setText("Seleziona la tipologia di forma :");
      QList<QString> listaFormaC={"Stecche","Praline"};
      for(int i=0;i<listaFormaC.length();++i)
          formaC->addItem(listaFormaC[i]);
      formaC->setCurrentIndex(0);

      lableTipoAroma1->setText("Seleziona il primo aroma :");
      QList<QString> listaaromi={"Albicocca","Limone","Liquirizia","Menta","Zenzero"};
      for(int i=0;i<listaaromi.length();++i)
          aroma1->addItem(listaaromi[i]);
      aroma1->setCurrentIndex(0);
      lableTipoAroma2->setText("Seleziona il secondo aroma , se desiderato, senno lasciare 'Nessun aroma': ");
      QList<QString> listaaromi1={"Nessun aroma","Albicocca","Limone","Liquirizia","Menta","Zenzero"};
      for(int i=0;i<listaaromi1.length();++i)
          aroma2->addItem(listaaromi1[i]);
      aroma2->setCurrentIndex(0);
      lableSfuso->setText("Seleziona se l' infuso è sfuso oppure no.");
      QList<QString> listaSfuso={"Sfuso","Non sfuso"};
      for(int i=0;i<listaSfuso.length();++i)
          sfuso->addItem(listaSfuso[i]);
      sfuso->setCurrentIndex(0);


      lableTipoBong->setText("Seleziona la forma del bong *:");
      backer->setText("Backer");
      dritto->setText("Dritto");
      lableTipoDimensioni->setText("Seleziona le dimensioni del bong");
      QList<QString> listaDimB={"33X4.6 cm","45X4.6 cm"};
      for(int i=0;i<listaDimB.length();++i)
          dimBacker->addItem(listaDimB[i]);
      QList<QString> listaDimD={"24X3.1 cm","32X4.1 cm","37X5.3 cm","46X6.7 cm"};
      for(int i=0;i<listaDimD.length();++i)
          dimDritto->addItem(listaDimD[i]);

      lableSchermo->setText("Selezionare se il vaporizzatore ha schermo o meno");
      QList<QString> listaSchermo={"Schermo","No schermo"};
      for(int i=0;i<listaSchermo.length();++i)
          schermo->addItem(listaSchermo[i]);
      schermo->setCurrentIndex(0);
      lableCapienza->setText("Selezionare la quantita massima di carico del vaporizzatore");
      QList<QString> listaCapienza={"1 gr","2 gr","3 gr","4 gr"};
      for(int i=0;i<listaCapienza.length();++i)
          capienza->addItem(listaCapienza[i]);
      capienza->setCurrentIndex(0);
      lableVelocita->setText("Selezionare il livello di velocita il cui il prodotto fa evaporare l'erba");
      QList<QString> listaVelocita={"Lv 1","Lv 2","Lv 3"};
      for(int i=0;i<listaVelocita.length();++i)
          velocita->addItem(listaVelocita[i]);
      velocita->setCurrentIndex(0);

      lableNDenti->setText("Seleziona il numero di denti presenti nel grider :");
      QList<QString> listaDenti={"6","12","24","30","36"};
      for(int i=0;i<listaDenti.length();++i)
          ndenti->addItem(listaDenti[i]);
      lableRaccPoll->setText("Seleziona se il grinder ha o no il raccogli polline");
      QList<QString> raccogliP={"Con raccogli polline","Senza raccogli polline"};
      for(int i=0;i<raccogliP.length();++i)
          raccoglipoll->addItem(raccogliP[i]);
      raccoglipoll->setCurrentIndex(0);;



      labelNomeRegalo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelNomeRegalo->setWordWrap(true);

      labelIngredienti->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelIngredienti->setWordWrap(true);

      labelPeso->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelPeso->setWordWrap(true);

      labelHemp->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelHemp->setWordWrap(true);

      labelProd->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelProd->setWordWrap(true);

      labelColori->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelColori->setWordWrap(true);

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

      labelObbligatorio->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
      labelObbligatorio->setWordWrap(true);



      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteBiscotti()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteCioccolato()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteInfusi()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(nessunProdSel()));

      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteFormaBong()));
      connect(backer,SIGNAL(toggled(bool)),this,SLOT(scelteDimensioniB(bool)));
      connect(dritto,SIGNAL(toggled(bool)),this,SLOT(scelteDimensioniD(bool)));

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
      //CONNECT CHECKHEMP
      connect(hempI,SIGNAL(toggled(bool)),this,SLOT(checkIndica(bool)));
      connect(hempS,SIGNAL(toggled(bool)),this,SLOT(checkSativa(bool)));
      //CONNECT CHECKPRODUZIONE
      connect(prodI,SIGNAL(toggled(bool)),this,SLOT(checkIndoor(bool)));
      connect(prodO,SIGNAL(toggled(bool)),this,SLOT(checkOutdoor(bool)));
      //CONNECT CHECKGRANELLA
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteVapo()));
      connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteGrinder()));

      connect(backer,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
      connect(dritto,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
}
void Inserisci::resetCambioProdotto(){
    regalo->setChecked(false);
    hempI->setChecked(false);
    hempS->setChecked(false);
    prodI->setChecked(false);
    prodO->setChecked(false);
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


    regalo->setEnabled(true);
    hempI->setEnabled(true);
    hempS->setEnabled(true);
    prodI->setEnabled(true);
    prodO->setEnabled(true);
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
    alta->setEnabled(true);
    cocco->setEnabled(true);
    noce->setEnabled(true);
    mandorla->setEnabled(true);
    nocciola->setEnabled(true);
    backer->setEnabled(true);
    dritto->setEnabled(true);

    colori->setCurrentIndex(0);
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

    nome->setText("");
    peso->setText("");


}
void Inserisci::resetInserisci(){
    regalo->setChecked(false);
    hempI->setChecked(false);
    hempS->setChecked(false);
    prodI->setChecked(false);
    prodO->setChecked(false);
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


    regalo->setEnabled(true);
    hempI->setEnabled(true);
    hempS->setEnabled(true);
    prodI->setEnabled(true);
    prodO->setEnabled(true);
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
    alta->setEnabled(true);
    cocco->setEnabled(true);
    noce->setEnabled(true);
    mandorla->setEnabled(true);
    nocciola->setEnabled(true);
    backer->setEnabled(true);
    dritto->setEnabled(true);

    colori->setCurrentIndex(0);
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

    nome->setText("");
    peso->setText("");


    nome->hide();
    labelNomeRegalo->hide();
    regalo->hide();
    labelObbligatorio->hide();
}

void Inserisci::scelteBiscotti(){
    if(tipoProdotto->currentText()=="Biscotti"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //CONSUMABILI
        labelIngredienti->setText("Ingredienti : farina,uova,burro,zucchero,hemp");
        labelIngredienti->show();
        labelPeso->show();
        peso->show();
        labelHemp->show();
        hempI->show();
        hempS->show();
        labelProd->show();
        prodI->show();
        prodO->show();

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
        if(tipoProdotto->currentText()!="Bong" && tipoProdotto->currentText()!="Vaporizzatore" && tipoProdotto->currentText()!="Grinder" ){
           //NON CONSUMABILI
           labelColori->hide();
           colori->hide();
        }

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

        labelObbligatorio->hide();
    }

    resetCambioProdotto();
}

void Inserisci::scelteCioccolato(){
    if(tipoProdotto->currentText()=="Cioccolata"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //CONSUMABILI
        labelIngredienti->show();
        labelIngredienti->setText("Cioccolato, burro, zucchero,hemp");
        labelPeso->show();
        peso->show();
        labelHemp->show();
        hempI->show();
        hempS->show();
        labelProd->show();
        prodI->show();
        prodO->show();

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
         if(tipoProdotto->currentText()!="Bong" && tipoProdotto->currentText()!="Vaporizzatore" && tipoProdotto->currentText()!="Grinder" ){
            //NON CONSUMABILI
            labelColori->hide();
            colori->hide();
         }

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

    resetCambioProdotto();
}

void Inserisci::scelteInfusi(){
    if(tipoProdotto->currentText()=="Infusi"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //CONSUMABILI
        labelIngredienti->show();
        labelIngredienti->setText("Foglie di the,hemp, fiori di calendula,fiori di sambuco,fiori di camomilla");
        labelPeso->show();
        peso->show();
        labelHemp->show();
        hempI->show();
        hempS->show();
        labelProd->show();
        prodI->show();
        prodO->show();

        lableTipoAroma1->show();
        aroma1->show();
        lableTipoAroma2->show();
        aroma2->show();
        lableSfuso->show();
        sfuso->show();
    }
    else{
        if(tipoProdotto->currentText()!="Bong" && tipoProdotto->currentText()!="Vaporizzatore" && tipoProdotto->currentText()!="Grinder" ){
           //NON CONSUMABILI
           labelColori->hide();
           colori->hide();
        }

        lableTipoAroma1->hide();
        aroma1->hide();
        lableTipoAroma2->hide();
        aroma2->hide();
        lableSfuso->hide();
        sfuso->hide();
    }

    resetCambioProdotto();
}

void Inserisci::scelteFormaBong(){
    if(tipoProdotto->currentText()=="Bong"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //NON CONSUMABILI
        labelColori->show();
        colori->show();

        lableTipoBong->show();
        backer->show();
        dritto->show();
    }
    else{
        if(tipoProdotto->currentText()!="Biscotti" && tipoProdotto->currentText()!="Cioccolata" && tipoProdotto->currentText()!="Infusi" ){
            //CONSUMABILI
            labelIngredienti->hide();
            labelPeso->hide();
            peso->hide();
            labelHemp->hide();
            hempI->hide();
            hempS->hide();
            labelProd->hide();
            prodI->hide();
            prodO->hide();
        }
        lableTipoBong->show();
        backer->show();
        dritto->show();

        lableTipoBong->hide();
        backer->hide();
        dritto->hide();
        lableTipoDimensioni->hide();
        dimBacker->hide();
        dimDritto->hide();
    }

    resetCambioProdotto();
}

void Inserisci::scelteDimensioniB(bool flag){
    lableTipoDimensioni->show();
    if(flag) dritto->setEnabled(false);
    else dritto->setEnabled(true);
    dimBacker->show();
    dimDritto->hide();

}
void Inserisci::scelteDimensioniD(bool flag){
    lableTipoDimensioni->show();
    if(flag) backer->setEnabled(false);
    else backer->setEnabled(true);
    dimBacker->hide();
    dimDritto->show();
}
void Inserisci::scelteVapo(){
    if(tipoProdotto->currentText()=="Vaporizzatore"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //NON CONSUMABILI
        labelColori->show();
        colori->show();

        lableSchermo->show();
        schermo->show();
        lableCapienza->show();
        capienza->show();
        lableVelocita->show();
        velocita->show();
    }
    else{
        if(tipoProdotto->currentText()!="Biscotti" && tipoProdotto->currentText()!="Cioccolata" && tipoProdotto->currentText()!="Infusi" ){
            //CONSUMABILI
            labelIngredienti->hide();
            labelPeso->hide();
            peso->hide();
            labelHemp->hide();
            hempI->hide();
            hempS->hide();
            labelProd->hide();
            prodI->hide();
            prodO->hide();
        }

        lableSchermo->hide();
        schermo->hide();
        lableCapienza->hide();
        capienza->hide();
        lableVelocita->hide();
        velocita->hide();  
    }

    resetCambioProdotto();
}
void Inserisci::scelteGrinder(){
    if(tipoProdotto->currentText()=="Grinder"){
        //GENERALI
        labelNomeRegalo->show();
        nome->show();
        regalo->show();
        labelObbligatorio->show();
        //NON CONSUMABILI
        labelColori->show();
        colori->show();

        lableNDenti->show();
        ndenti->show();
        lableRaccPoll->show();
        raccoglipoll->show();
    }
    else{
        if(tipoProdotto->currentText()!="Biscotti" && tipoProdotto->currentText()!="Cioccolata" && tipoProdotto->currentText()!="Infusi" ){
            //CONSUMABILI
            labelIngredienti->hide();
            labelPeso->hide();
            peso->hide();
            labelHemp->hide();
            hempI->hide();
            hempS->hide();
            labelProd->hide();
            prodI->hide();
            prodO->hide();
        }

        lableNDenti->hide();
        ndenti->hide();
        lableRaccPoll->hide();
        raccoglipoll->hide();
    }

    resetCambioProdotto();
}
void Inserisci::nessunProdSel(){
    if(tipoProdotto->currentText()=="Seleziona prodotto..."){
        labelNomeRegalo->hide();
        nome->hide();
        regalo->hide();
        labelObbligatorio->hide();
        resetCambioProdotto();
    }
}
void Inserisci::resetDim(){
    if(backer->isEnabled()==true && dritto->isEnabled()==true){
        dimBacker->hide();
        dimDritto->hide();
        lableTipoDimensioni->hide();
    }
}
//CHECKFARINE
void Inserisci::checkGrano(bool f){
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
void Inserisci::checkRiso(bool f){
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
void Inserisci::checkMandorle(bool f){
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
void Inserisci::checkCastagne(bool f){
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
void Inserisci::checkAmaranto(bool f){
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
void Inserisci::checkSenza(bool f){
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
void Inserisci::checkLatte(bool f){
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
void Inserisci::checkFondente(bool f){
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
void Inserisci::checkBianco(bool f){
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
void Inserisci::checkNessuna(bool f){
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
void Inserisci::checkBassa(bool f){
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
void Inserisci::checkMedia(bool f){
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
void Inserisci::checkAlta(bool f){
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
void Inserisci::checkCocco(bool f){
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
void Inserisci::checkNoce(bool f){
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
void Inserisci::checkMandorla(bool f){
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
void Inserisci::checkNocciola(bool f){
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
//CHECKHEMP
void Inserisci::checkIndica(bool f){
    if(f) hempS->setEnabled(false);
    else hempS->setEnabled(true);
}
void Inserisci::checkSativa(bool f){
    if(f) hempI->setEnabled(false);
    else hempI->setEnabled(true);
}
//CHECKPRODUZIONE
void Inserisci::checkIndoor(bool f){
    if(f) prodO->setEnabled(false);
    else prodO->setEnabled(true);
}
void Inserisci::checkOutdoor(bool f){
    if(f) prodI->setEnabled(false);
    else prodI->setEnabled(true);
}
//GET
QPushButton* Inserisci::getInserisciBut() const {
    return  inserisci;
}
prodotto* Inserisci::nuovoProdotto(){
    prodotto* ritorno = nullptr;
    //NOME
    std::string nomeNuovo=nome->text().toStdString();
    //CONFEZIONE REGALO
    bool confRegalo=regalo->isChecked()==true ? true : false;
    //CONSUMABILI
    std::vector<std::string> nuoviIng;
    if(tipoProdotto->currentText()=="Biscotti"){
        nuoviIng.push_back("farina");
        nuoviIng.push_back("uova");
        nuoviIng.push_back("burro");
        nuoviIng.push_back("zucchero");
        nuoviIng.push_back("hemp");
        double nuovoPeso=peso->text().toDouble();
        bool nuovoHemp=hempI->isChecked()==true ? true : false;
        bool nuovoProd=prodI->isChecked()==true ? true : false;
        int nuovoFarina;
        int nuovoGocce;
        if(grano->isChecked()==true){
            nuovoFarina=1;
        }
        else if(riso->isChecked()==true){
            nuovoFarina=2;
        }
        else if(mandorle->isChecked()==true){
            nuovoFarina=3;
        }
        else if(castagne->isChecked()==true){
            nuovoFarina=4;
        }
        else {
            nuovoFarina=5;
        }

        if(senza->isChecked()==true){
            nuovoGocce= 4;
        }
        else if(latte->isChecked()==true){
            nuovoGocce= 1;
        }
        else if(fondente->isChecked()==true){
            nuovoGocce= 2;
        }
        else{
            nuovoGocce= 3;
        }
        if(nomeNuovo!="" &&
           nuovoPeso!=0 &&
          (hempI->isChecked()==true || hempS->isChecked()==true) &&
          (prodI->isChecked()==true || prodO->isChecked()==true) &&
          (grano->isChecked()==true || riso->isChecked()==true || mandorle->isChecked()==true || castagne->isChecked()==true || amaranto->isChecked()==true) &&
          (senza->isChecked()==true || latte->isChecked()==true || fondente->isChecked()==true || bianco->isChecked()==true))
            ritorno= new biscotti(nomeNuovo,confRegalo,nuoviIng,nuovoPeso,nuovoHemp,nuovoProd,nuovoFarina,nuovoGocce);
        else ritorno=nullptr;

    }
    else if(tipoProdotto->currentText()=="Cioccolata"){
        nuoviIng.push_back("cioccolato");
        nuoviIng.push_back("burro");
        nuoviIng.push_back("zucchero");
        nuoviIng.push_back("hemp");
        double nuovoPeso=peso->text().toDouble();
        bool nuovoHemp=hempI->isChecked()==true ? true : false;
        bool nuovoProd=prodI->isChecked()==true ? true : false;
        int nuovoFondenza;
        int nuovoGranella;
        bool nuovoFormaC;
        if(nessuna->isChecked()==true){
            nuovoFondenza= 1;
        }
        else if(bassa->isChecked()==true){
            nuovoFondenza= 2;
        }
        else if(media->isChecked()==true){
            nuovoFondenza= 3;
        }
        else{
            nuovoFondenza= 4;
        }
        if(cocco->isChecked()==true){
            nuovoGranella= 1;
        }
        else if(noce->isChecked()==true){
            nuovoGranella= 2;
        }
        else if(mandorla->isChecked()==true){
            nuovoGranella= 3;
        }
        else {
            nuovoGranella= 4;
        }
        if(formaC->currentText()=="Stecche") nuovoFormaC=true;
        else nuovoFormaC=false;

        if(nomeNuovo!="" &&
           nuovoPeso!=0 &&
           (hempI->isChecked()==true || hempS->isChecked()==true) &&
           (prodI->isChecked()==true || prodO->isChecked()==true) &&
           (nessuna->isChecked()==true || bassa->isChecked()==true || media->isChecked()==true || alta->isChecked()==true) &&
           (cocco->isChecked()==true || noce->isChecked()==true || mandorla->isChecked()==true || nocciola->isChecked()==true))
            ritorno= new cioccolata(nomeNuovo,confRegalo,nuoviIng,nuovoPeso,nuovoHemp,nuovoProd,nuovoGranella,nuovoFondenza,nuovoFormaC);
        else ritorno=nullptr;
    }
    else if(tipoProdotto->currentText()=="Infusi"){
        nuoviIng.push_back("foglie di the");
        nuoviIng.push_back("hemp");
        nuoviIng.push_back("fiori di calendula");
        nuoviIng.push_back("fiori di sambuco");
        nuoviIng.push_back("fiori di camomilla");
        double nuovoPeso=peso->text().toDouble();
        bool nuovoHemp=hempI->isChecked()==true ? true : false;
        bool nuovoProd=prodI->isChecked()==true ? true : false;
        bool nuovoSfuso;
        std::vector<std::string> nuoviAromi;
        nuoviAromi.push_back(aroma1->currentText().toStdString());
        if(aroma2->currentText().toStdString()!="Nessun aroma")
            nuoviAromi.push_back(aroma2->currentText().toStdString());
        if(sfuso->currentText()=="Sfuso") nuovoSfuso=true;
        else nuovoSfuso=false;
        if(nomeNuovo!="" &&
           nuovoPeso!=0 &&
           (hempI->isChecked()==true || hempS->isChecked()==true) &&
           (prodI->isChecked()==true || prodO->isChecked()==true))
            ritorno= new infusi(nomeNuovo,confRegalo,nuoviIng,nuovoPeso,nuovoHemp,nuovoProd,nuoviAromi,nuovoSfuso);
        else ritorno=nullptr;
    }
    //NON CONSUMABILI
    else if(tipoProdotto->currentText()=="Bong"){
        std::string nuovoColore=colori->currentText().toStdString();
        bool nuovaForma=backer->isChecked()==true ? true : false;
        int nuovoAltezza;
        double nuovoLarghezza;
        if(nuovaForma){
            if(dimBacker->currentText()=="33X4.6 cm"){
                nuovoAltezza= 5;
                nuovoLarghezza= 4.6;
            }
            else if(dimBacker->currentText()=="45X4.6 cm"){
                nuovoAltezza= 6;
                nuovoLarghezza= 4.6;
            }
        }
        else{
            if(dimDritto->currentText()=="24X3.1 cm"){
                nuovoAltezza= 1;
                nuovoLarghezza= 3.1;
            }
            else if(dimDritto->currentText()=="32X4.1 cm"){
                nuovoAltezza= 2;
                nuovoLarghezza= 4.1;
            }
            else if(dimDritto->currentText()=="37X5.3 cm"){
                nuovoAltezza= 3;
                nuovoLarghezza= 5.3;
            }
            else if(dimDritto->currentText()=="46X6.7 cm"){
                nuovoAltezza= 4;
                nuovoLarghezza= 6.7;
            }
        }
        if(nomeNuovo!="" &&
          (dritto->isChecked()==true || backer->isChecked()==true))
            ritorno = new bong(nomeNuovo,confRegalo,nuovoColore,nuovaForma,nuovoAltezza,nuovoLarghezza);
        else ritorno=nullptr;
    }
    else if(tipoProdotto->currentText()=="Vaporizzatore"){
        std::string nuovoColore=colori->currentText().toStdString();
        int nuovoVelocita;
        double nuovoCapienza;
        bool nuovoSchermo;
        if(velocita->currentText()=="Lv 1"){
            nuovoVelocita= 1 ;
        }
        else if(velocita->currentText()=="Lv 2"){
            nuovoVelocita= 2;
        }
        else {
            nuovoVelocita= 3;
        }
        if(capienza->currentText()=="1 gr"){
            nuovoCapienza= 1 ;
        }
        else if(capienza->currentText()=="2 gr"){
            nuovoCapienza= 2;
        }
        else if(capienza->currentText()=="3 gr"){
            nuovoCapienza= 3;
        }
        else{
            nuovoCapienza= 4;
        }
        if(schermo->currentText()=="Schermo") nuovoSchermo=true;
        else nuovoSchermo=false;

        if(nomeNuovo!="")
            ritorno = new vaporizzatore(nomeNuovo,confRegalo,nuovoColore,nuovoVelocita,nuovoCapienza,nuovoSchermo);
        else ritorno=nullptr;
    }
    else if(tipoProdotto->currentText()=="Grinder"){
        std::string nuovoColore=colori->currentText().toStdString();
        int nuovoNdenti;
        int nuovoRaccogliP;
        if(ndenti->currentText()=="6"){
            nuovoNdenti= 6 ;
        }
        else if(ndenti->currentText()=="12"){
            nuovoNdenti= 12;
        }
        else if(ndenti->currentText()=="24"){
            nuovoNdenti= 24;
        }
        else if(ndenti->currentText()=="30"){
            nuovoNdenti= 30;
        }
        else {
            nuovoNdenti= 36;
        }
        if(raccoglipoll->currentText()=="Con raccogli polline") nuovoRaccogliP=true;
        else nuovoRaccogliP=false;
        if(nomeNuovo!="")
            ritorno = new grinder(nomeNuovo,confRegalo,nuovoColore,nuovoNdenti,nuovoRaccogliP);
        else ritorno=nullptr;
    }
    return ritorno;
}

