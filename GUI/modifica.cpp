#include "modifica.h"

Modifica::Modifica(QWidget* p):
    parent(p),
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
    tipoProdotto(new QLabel(this)),
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

    salva(new QPushButton(this))
    {

     resize(800,100);

     QVBoxLayout* layoutMod         = new QVBoxLayout(this);
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


     layoutMod->addWidget(tipoProdotto);
     layoutMod->addLayout(layoutNomeRegalo);
     layoutMod->addWidget(labelIngredienti);

     layoutMod->addLayout(layoutPeso);
     layoutMod->addLayout(layoutHemp);
     layoutMod->addLayout(layoutProduzione);
     layoutMod->addLayout(layoutColori);

     layoutMod->addLayout(layoutFarine);
     layoutMod->addLayout(layoutGocce);
     layoutMod->addLayout(layoutFondenza);
     layoutMod->addLayout(layoutGranella);
     layoutMod->addLayout(layoutFormaC);
     layoutMod->addLayout(layoutAroma1);
     layoutMod->addLayout(layoutAroma2);
     layoutMod->addLayout(layoutSfuso);
     layoutMod->addLayout(layoutFormaB);
     layoutMod->addLayout(layoutDimensioni);
     layoutMod->addLayout(layoutSchermo);
     layoutMod->addLayout(layoutCapienza);
     layoutMod->addLayout(layoutVelocita);
     layoutMod->addLayout(layoutNDenti);
     layoutMod->addLayout(layoutRaccpolline);
     layoutMod->addWidget(salva);

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


     salva->show();
     salva->setText("Salva");

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

      labelNomeRegalo->setText("Inserisci il nome e spunta se confezione regalo");
      regalo->setText("Confezione Regalo?");
      labelPeso->setText("Peso:");
      labelHemp->setText("Tipologia di hemp:");
      hempI->setText("Indica");
      hempS->setText("Sativa");
      prodI->setText("Indoor");
      prodO->setText("Outdoor");
      labelProd->setText("Tipo di produzione:");
      labelColori->setText("Colore:");
      QList<QString> listaColori={"Bianco","Blu","Verde","Arancione","Viola","Fucsia","Oro","Giallo"};
      for(int i=0;i<listaColori.length();++i)
              colori->addItem(listaColori[i]);
       colori->setCurrentIndex(0);

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
      QList<QString> listaFormaC={"Stecche","Praline"};
      for(int i=0;i<listaFormaC.length();++i)
          formaC->addItem(listaFormaC[i]);
      formaC->setCurrentIndex(0);

      lableTipoAroma1->setText("Seleziona il primo aroma: ");
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

      lableTipoBong->setText("Seleziona la forma del bong");
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



//        connect(tipoProdotto,SIGNAL(currentIndexChanged(int)),this,SLOT(scelteBiscotti()));
      connect(backer,SIGNAL(toggled(bool)),this,SLOT(checkDimensioniB(bool)));
      connect(dritto,SIGNAL(toggled(bool)),this,SLOT(checkDimensioniD(bool)));

      //CONNECT RESET_CHECK_FARINE
      connect(grano,SIGNAL(stateChanged(int)),this,SLOT(resetFarine()));
      connect(riso,SIGNAL(stateChanged(int)),this,SLOT(resetFarine()));
      connect(mandorle,SIGNAL(stateChanged(int)),this,SLOT(resetFarine()));
      connect(castagne,SIGNAL(stateChanged(int)),this,SLOT(resetFarine()));
      connect(amaranto,SIGNAL(stateChanged(int)),this,SLOT(resetFarine()));
      connect(grano,SIGNAL(toggled(bool)),this,SLOT(checkGrano(bool)));
      connect(riso,SIGNAL(toggled(bool)),this,SLOT(checkRiso(bool)));
      connect(mandorle,SIGNAL(toggled(bool)),this,SLOT(checkMandorle(bool)));
      connect(castagne,SIGNAL(toggled(bool)),this,SLOT(checkCastagne(bool)));
      connect(amaranto,SIGNAL(toggled(bool)),this,SLOT(checkAmaranto(bool)));
      //CONNECT RESET_CHECK_GOCCE
      connect(senza,SIGNAL(stateChanged(int)),this,SLOT(resetGocce()));
      connect(latte,SIGNAL(stateChanged(int)),this,SLOT(resetGocce()));
      connect(fondente,SIGNAL(stateChanged(int)),this,SLOT(resetGocce()));
      connect(bianco,SIGNAL(stateChanged(int)),this,SLOT(resetGocce()));
      connect(senza,SIGNAL(toggled(bool)),this,SLOT(checkSenza(bool)));
      connect(latte,SIGNAL(toggled(bool)),this,SLOT(checkLatte(bool)));
      connect(fondente,SIGNAL(toggled(bool)),this,SLOT(checkFondente(bool)));
      connect(bianco,SIGNAL(toggled(bool)),this,SLOT(checkBianco(bool)));
      //CONNECT RESET_CHECK_FONDENZA
      connect(nessuna,SIGNAL(stateChanged(int)),this,SLOT(resetFondenza()));
      connect(bassa,SIGNAL(stateChanged(int)),this,SLOT(resetFondenza()));
      connect(media,SIGNAL(stateChanged(int)),this,SLOT(resetFondenza()));
      connect(alta,SIGNAL(stateChanged(int)),this,SLOT(resetFondenza()));
      connect(nessuna,SIGNAL(toggled(bool)),this,SLOT(checkNessuna(bool)));
      connect(bassa,SIGNAL(toggled(bool)),this,SLOT(checkBassa(bool)));
      connect(media,SIGNAL(toggled(bool)),this,SLOT(checkMedia(bool)));
      connect(alta,SIGNAL(toggled(bool)),this,SLOT(checkAlta(bool)));
      //CONNECT RESET_CHECK_GRANELLA
      connect(cocco,SIGNAL(stateChanged(int)),this,SLOT(resetGranella()));
      connect(noce,SIGNAL(stateChanged(int)),this,SLOT(resetGranella()));
      connect(mandorla,SIGNAL(stateChanged(int)),this,SLOT(resetGranella()));
      connect(nocciola,SIGNAL(stateChanged(int)),this,SLOT(resetGranella()));
      connect(cocco,SIGNAL(toggled(bool)),this,SLOT(checkCocco(bool)));
      connect(noce,SIGNAL(toggled(bool)),this,SLOT(checkNoce(bool)));
      connect(mandorla,SIGNAL(toggled(bool)),this,SLOT(checkMandorla(bool)));
      connect(nocciola,SIGNAL(toggled(bool)),this,SLOT(checkNocciola(bool)));
      //CONNECT RESET_CHECK_HEMP
      connect(hempI,SIGNAL(stateChanged(int)),this,SLOT(resetHemp()));
      connect(hempS,SIGNAL(stateChanged(int)),this,SLOT(resetHemp()));
      connect(hempI,SIGNAL(toggled(bool)),this,SLOT(checkIndica(bool)));
      connect(hempS,SIGNAL(toggled(bool)),this,SLOT(checkSativa(bool)));
      //CONNECT RESET_CHECK_PRODUZIONE
      connect(prodI,SIGNAL(toggled(bool)),this,SLOT(checkIndoor(bool)));
      connect(prodO,SIGNAL(toggled(bool)),this,SLOT(checkOutdoor(bool)));
      //CONNECT RESET_DIM_BONG
      connect(backer,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
      connect(dritto,SIGNAL(stateChanged(int)),this,SLOT(resetDim()));
}
void Modifica::setProdotto(prodotto *p){
    prodottoDaModificare=p;
}
void Modifica::compilaModifica() {
    //setto il nome
    nome->setText(QString::fromStdString(prodottoDaModificare->getNome()));
    //confezione regalo?
    if(prodottoDaModificare->getConfezioneRegalo()) regalo->setCheckState(Qt::Checked);
    else regalo->setCheckState(Qt::Unchecked);
    consumabile* cons = dynamic_cast<consumabile*>(prodottoDaModificare);
    nonConsumabile* nCons = dynamic_cast<nonConsumabile*>(prodottoDaModificare);
    labelNomeRegalo->show();
    nome->show();
    regalo->show();
    if(cons!=nullptr){
        biscotti* bisc = dynamic_cast<biscotti*>(cons);
        cioccolata* ciocc = dynamic_cast<cioccolata*>(cons);
        infusi* infu = dynamic_cast<infusi*>(cons);
        peso->setText(QString::number(cons->getPeso(),'h',3));
        if(cons->getErba()){
            hempI->setCheckState(Qt::Checked);
            hempS->setCheckState(Qt::Unchecked);
            hempS->setEnabled(false);
        }
        else{
            hempI->setCheckState(Qt::Unchecked);
            hempS->setCheckState(Qt::Checked);
            hempI->setEnabled(false);
        }
        if(cons->getProduzione()){
            prodI->setCheckState(Qt::Checked);
            prodO->setCheckState(Qt::Unchecked);
            prodO->setEnabled(false);
        }
        else{
            prodI->setCheckState(Qt::Unchecked);
            prodO->setCheckState(Qt::Checked);
            prodI->setEnabled(false);
        }

        labelIngredienti->show();
        labelPeso->show();
        peso->show();
        labelHemp->show();
        hempI->show();
        hempS->show();
        labelProd->show();
        prodI->show();
        prodO->show();

        if(bisc!=nullptr){
            tipoProdotto->setText("Biscotti");
            labelIngredienti->setText("Inredienti: Farina,Uova,Burro,Zucchero,Hemp");
            if(bisc->getTipoFarina()==1){
                grano->setCheckState(Qt::Checked);
                riso->setCheckState(Qt::Unchecked);
                mandorle->setCheckState(Qt::Unchecked);
                castagne->setCheckState(Qt::Unchecked);
                amaranto->setCheckState(Qt::Unchecked);
                riso->setEnabled(false);
                mandorle->setEnabled(false);
                castagne->setEnabled(false);
                amaranto->setEnabled(false);

            }
            else if(bisc->getTipoFarina()==2){
                grano->setCheckState(Qt::Unchecked);
                riso->setCheckState(Qt::Checked);
                mandorle->setCheckState(Qt::Unchecked);
                castagne->setCheckState(Qt::Unchecked);
                amaranto->setCheckState(Qt::Unchecked);
                grano->setEnabled(false);
                mandorle->setEnabled(false);
                castagne->setEnabled(false);
                amaranto->setEnabled(false);
            }
            else if(bisc->getTipoFarina()==3){
                grano->setCheckState(Qt::Unchecked);
                riso->setCheckState(Qt::Unchecked);
                mandorle->setCheckState(Qt::Checked);
                castagne->setCheckState(Qt::Unchecked);
                amaranto->setCheckState(Qt::Unchecked);
                grano->setEnabled(false);
                riso->setEnabled(false);
                castagne->setEnabled(false);
                amaranto->setEnabled(false);
            }
            else if(bisc->getTipoFarina()==4){
                grano->setCheckState(Qt::Unchecked);
                riso->setCheckState(Qt::Unchecked);
                mandorle->setCheckState(Qt::Unchecked);
                castagne->setCheckState(Qt::Checked);
                amaranto->setCheckState(Qt::Unchecked);
                grano->setEnabled(false);
                riso->setEnabled(false);
                mandorle->setEnabled(false);
                amaranto->setEnabled(false);
            }
            else {
                grano->setCheckState(Qt::Unchecked);
                riso->setCheckState(Qt::Unchecked);
                mandorle->setCheckState(Qt::Unchecked);
                castagne->setCheckState(Qt::Unchecked);
                amaranto->setCheckState(Qt::Checked);
                grano->setEnabled(false);
                riso->setEnabled(false);
                mandorle->setEnabled(false);
                castagne->setEnabled(false);
            }

            if(bisc->getGocceCioccolata()==1){
                latte->setCheckState(Qt::Checked);
                fondente->setCheckState(Qt::Unchecked);
                bianco->setCheckState(Qt::Unchecked);
                senza->setCheckState(Qt::Unchecked);
                fondente->setEnabled(false);
                bianco->setEnabled(false);
                senza->setEnabled(false);
            }
            else if(bisc->getGocceCioccolata()==2){
                latte->setCheckState(Qt::Unchecked);
                fondente->setCheckState(Qt::Checked);
                bianco->setCheckState(Qt::Unchecked);
                senza->setCheckState(Qt::Unchecked);
                latte->setEnabled(false);
                bianco->setEnabled(false);
                senza->setEnabled(false);
            }
            else if(bisc->getGocceCioccolata()==3){
                latte->setCheckState(Qt::Unchecked);
                fondente->setCheckState(Qt::Unchecked);
                bianco->setCheckState(Qt::Checked);
                senza->setCheckState(Qt::Unchecked);
                latte->setEnabled(false);
                fondente->setEnabled(false);
                senza->setEnabled(false);
            }
            else{
                latte->setCheckState(Qt::Unchecked);
                fondente->setCheckState(Qt::Unchecked);
                bianco->setCheckState(Qt::Unchecked);
                senza->setCheckState(Qt::Checked);
                latte->setEnabled(false);
                fondente->setEnabled(false);
                bianco->setEnabled(false);
            }

            lableTipoFarine->show();
            grano->show();
            riso->show();
            mandorle->show();
            castagne->show();
            amaranto->show();

            lableTipoGocce->show();
            senza->show();
            latte->show();
            fondente->show();
            bianco->show();



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




            lableSfuso->hide();
            sfuso->hide();
            lableTipoAroma1->hide();
            aroma1->hide();
            lableTipoAroma2->hide();
            aroma2->hide();
        }

        if(ciocc!=nullptr){
            tipoProdotto->setText("Cioccolata");
            labelIngredienti->setText("Inredienti: Cioccolata,Burro,Zucchero,Hemp");

            if(ciocc->getLivelloFondenza()==1){
                nessuna->setCheckState(Qt::Checked);
                bassa->setCheckState(Qt::Unchecked);
                media->setCheckState(Qt::Unchecked);
                alta->setCheckState(Qt::Unchecked);
                bassa->setEnabled(false);
                media->setEnabled(false);
                alta->setEnabled(false);
            }
            else if(ciocc->getLivelloFondenza()==2){
                nessuna->setCheckState(Qt::Unchecked);
                bassa->setCheckState(Qt::Checked);
                media->setCheckState(Qt::Unchecked);
                alta->setCheckState(Qt::Unchecked);
                nessuna->setEnabled(false);
                media->setEnabled(false);
                alta->setEnabled(false);
            }
            else if(ciocc->getLivelloFondenza()==3){
                nessuna->setCheckState(Qt::Unchecked);
                bassa->setCheckState(Qt::Unchecked);
                media->setCheckState(Qt::Checked);
                alta->setCheckState(Qt::Unchecked);
                nessuna->setEnabled(false);
                bassa->setEnabled(false);
                alta->setEnabled(false);
            }
            else{
                nessuna->setCheckState(Qt::Unchecked);
                bassa->setCheckState(Qt::Unchecked);
                media->setCheckState(Qt::Unchecked);
                alta->setCheckState(Qt::Checked);
                nessuna->setEnabled(false);
                bassa->setEnabled(false);
                media->setEnabled(false);
            }

            if(ciocc->getTipoGranella()==1){
                cocco->setCheckState(Qt::Checked);
                noce->setCheckState(Qt::Unchecked);
                mandorla->setCheckState(Qt::Unchecked);
                nocciola->setCheckState(Qt::Unchecked);
                noce->setEnabled(false);
                mandorla->setEnabled(false);
                nocciola->setEnabled(false);
            }
            else if(ciocc->getTipoGranella()==2){
                cocco->setCheckState(Qt::Unchecked);
                noce->setCheckState(Qt::Checked);
                mandorla->setCheckState(Qt::Unchecked);
                nocciola->setCheckState(Qt::Unchecked);
                cocco->setEnabled(false);
                mandorla->setEnabled(false);
                nocciola->setEnabled(false);
            }
            else if(ciocc->getTipoGranella()==3){
                cocco->setCheckState(Qt::Unchecked);
                noce->setCheckState(Qt::Unchecked);
                mandorla->setCheckState(Qt::Checked);
                nocciola->setCheckState(Qt::Unchecked);
                cocco->setEnabled(false);
                noce->setEnabled(false);
                nocciola->setEnabled(false);
            }
            else{
                cocco->setCheckState(Qt::Unchecked);
                noce->setCheckState(Qt::Unchecked);
                mandorla->setCheckState(Qt::Unchecked);
                nocciola->setCheckState(Qt::Checked);
                cocco->setEnabled(false);
                noce->setEnabled(false);
                mandorla->setEnabled(false);
            }
            if(ciocc->getForma())formaC->setCurrentIndex(0);
            else formaC->setCurrentIndex(1);


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

            lableSfuso->hide();
            sfuso->hide();
            lableTipoAroma1->hide();
            aroma1->hide();
            lableTipoAroma2->hide();
            aroma2->hide();

        }

        if(infu!=nullptr){
            tipoProdotto->setText("Infusi");
            labelIngredienti->setText("Inredienti: Fiori Di Camomilla,Fiori Di Calendula,Fiori Di Sambuco,Foglie Di The,Hemp");
            std::vector<std::string> listaAromi = infu->getAroma();
            int count=0;
            for(std::vector<std::string>::const_iterator cit=listaAromi.cbegin();cit!=listaAromi.cend();++cit){
               QString corrente = QString::fromStdString(*cit);
               if(count==0){
                aroma1->setCurrentIndex(aroma1->findText(corrente));
                lableTipoAroma1->show();
                aroma1->show();
                count++;
               }
               if(count==1){
                       if(listaAromi.size()==2){
                            aroma2->setCurrentIndex(aroma2->findText(corrente));
                            lableTipoAroma2->show();
                            aroma2->show();
                       }
                       else{
                           aroma2->setCurrentIndex(0);
                           lableTipoAroma2->show();
                           aroma2->show();
                       }
               }
            }
            if(infu->getSfuso())sfuso->setCurrentIndex(0);
            else sfuso->setCurrentIndex(1);
//            lableTipoAroma1->show();
//            aroma1->show();
            lableSfuso->show();
            sfuso->show();

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
        colori->hide();
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
    }
    if(nCons!=nullptr){
        bong* bng = dynamic_cast<bong*>(nCons);
        vaporizzatore* vapo = dynamic_cast<vaporizzatore*>(nCons);
        grinder* grd = dynamic_cast<grinder*>(nCons);
        QString colore = QString::fromStdString(nCons->getColori());
        colori->setCurrentIndex(colori->findText(colore));
        colori->show();
        if(bng!=nullptr){
            tipoProdotto->setText("Bong");
            if(bng->getForma()){
                backer->setCheckState(Qt::Checked);
                dritto->setCheckState(Qt::Unchecked);
                dritto->setEnabled(false);
                std::string altezza;
                std::stringstream larghezza;
                larghezza<<std::fixed<<std::setprecision(1)<<bng->getLarghezza();
                if(bng->getAltezza()==1) altezza="24";
                else if(bng->getAltezza()==2) altezza="32";
                else if(bng->getAltezza()==3) altezza="37";
                else if(bng->getAltezza()==4) altezza="46";
                else if(bng->getAltezza()==5) altezza="33";
                else altezza="45";
                std::string dimB = altezza + "X"+ larghezza.str()+" cm";
                qDebug()<<QString::fromStdString(dimB);
                dimBacker->setCurrentText(QString::fromStdString(dimB));

                dimBacker->show();
                dimDritto->hide();
            }
            else{
                backer->setCheckState(Qt::Unchecked);
                dritto->setCheckState(Qt::Checked);
                backer->setEnabled(false);
                std::string altezza;
                std::stringstream larghezza;
                larghezza<<std::fixed<<std::setprecision(1)<<bng->getLarghezza();
                if(bng->getAltezza()==1) altezza="24";
                else if(bng->getAltezza()==2) altezza="32";
                else if(bng->getAltezza()==3) altezza="37";
                else if(bng->getAltezza()==4) altezza="46";
                else if(bng->getAltezza()==5) altezza="33";
                else altezza="45";
                std::string dimD = altezza + "X"+ larghezza.str()+" cm";
                qDebug()<<QString::fromStdString(dimD);
                dimDritto->setCurrentText(QString::fromStdString(dimD));

                dimBacker->hide();
                dimDritto->show();
            }
            lableTipoBong->show();
            backer->show();
            dritto->show();
            lableTipoDimensioni->show();

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

        }
        if(vapo!=nullptr){
            tipoProdotto->setText("Vaporizzatori");

            if(vapo->getSchermo()) schermo->setCurrentIndex(0);
            else schermo->setCurrentIndex(1);

            if(vapo->getCapienza()==1) capienza->setCurrentIndex(0);
            else if(vapo->getCapienza()==2) capienza->setCurrentIndex(1);
            else if(vapo->getCapienza()==3) capienza->setCurrentIndex(2);
            else capienza->setCurrentIndex(3);


            if(vapo->getVelocitaEvaporazione()==1) velocita->setCurrentIndex(0);
            else if(vapo->getVelocitaEvaporazione()==2) velocita->setCurrentIndex(1);
            else velocita->setCurrentIndex(2);



            lableSchermo->show();
            schermo->show();
            lableCapienza->show();
            capienza->show();
            lableVelocita->show();
            velocita->show();

            lableTipoBong->hide();
            backer->hide();
            dritto->hide();
            lableTipoDimensioni->hide();
            dimBacker->hide();
            dimDritto->hide();
            lableNDenti->hide();
            ndenti->hide();
            lableRaccPoll->hide();
            raccoglipoll->hide();

        }
        if(grd!=nullptr){
            tipoProdotto->setText("Grinder");


            if(grd->getNdenti()==6) ndenti->setCurrentText("6");
            else if(grd->getNdenti()==12) ndenti->setCurrentText("12");
            else if(grd->getNdenti()==24) ndenti->setCurrentText("24");
            else if(grd->getNdenti()==30) ndenti->setCurrentText("30");
            else if(grd->getNdenti()==36) ndenti->setCurrentText("36");


            if(grd->getRaccogliPolline()) raccoglipoll->setCurrentIndex(0);
            else raccoglipoll->setCurrentIndex(1);

            lableNDenti->show();
            ndenti->show();
            lableRaccPoll->show();
            raccoglipoll->show();

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
        }
        labelIngredienti->hide();
        labelPeso->hide();
        peso->hide();
        labelHemp->hide();
        hempI->hide();
        hempS->hide();
        labelProd->hide();
        prodI->hide();
        prodO->hide();
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

        lableSfuso->hide();
        sfuso->hide();
        lableTipoAroma1->hide();
        aroma1->hide();
        lableTipoAroma2->hide();
        aroma2->hide();
    }


}
//RESET_CHECK_HEMP
void Modifica::resetHemp(){
    if(hempS->isEnabled()==true){
       hempI->setEnabled(true);
    }
    if(hempI->isEnabled()==true){
       hempS->setEnabled(true);
    }

}
void Modifica::checkIndica(bool f){
    if(f) {
        hempI->setCheckState(Qt::Checked);
        hempS->setEnabled(false);
    }
    else {
        hempI->setCheckState(Qt::Unchecked);
        hempS->setEnabled(true);
    }
}
void Modifica::checkSativa(bool f){
    if(f){
        hempS->setCheckState(Qt::Checked);
        hempI->setEnabled(false);
    }
    else{
        hempS->setCheckState(Qt::Unchecked);
        hempI->setEnabled(true);
    }
}

//RESET_CHECK_PRODUZIONE
void Modifica::resetProduzione(){
    if(prodO->isEnabled()==true){
        prodI->setEnabled(true);
    }
    if(prodI->isEnabled()==true){
        prodO->setEnabled(true);
    }
}
void Modifica::checkIndoor(bool f){
    if(f) {
        prodI->setCheckState(Qt::Checked);
        prodO->setEnabled(false);
    }
    else {
        prodI->setCheckState(Qt::Unchecked);
        prodO->setEnabled(true);
    }
}
void Modifica::checkOutdoor(bool f){
    if(f){
        prodO->setCheckState(Qt::Checked);
        prodI->setEnabled(false);
    }
    else{
        prodO->setCheckState(Qt::Unchecked);
        prodI->setEnabled(true);
    }
}
//RESET_CHECK_GRANELLA
void Modifica::resetGranella(){
    if(cocco->isEnabled()==true){
        noce->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
    if(noce->isEnabled()==true){
        cocco->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
    if(mandorla->isEnabled()==true){
        cocco->setEnabled(true);
        noce->setEnabled(true);
        nocciola->setEnabled(true);
    }
    if(nocciola->isEnabled()==true){
        cocco->setEnabled(true);
        noce->setEnabled(true);
        mandorla->setEnabled(true);
    }
}
void Modifica::checkCocco(bool f){
    if(f){
        cocco->setCheckState(Qt::Checked);
        noce->setEnabled(false);
        mandorla->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        cocco->setCheckState(Qt::Unchecked);
        noce->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Modifica::checkNoce(bool f){
    if(f){
        noce->setCheckState(Qt::Checked);
        cocco->setEnabled(false);
        mandorla->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        noce->setCheckState(Qt::Unchecked);
        cocco->setEnabled(true);
        mandorla->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Modifica::checkMandorla(bool f){
    if(f){
        mandorla->setCheckState(Qt::Checked);
        cocco->setEnabled(false);
        noce->setEnabled(false);
        nocciola->setEnabled(false);
    }
    else{
        mandorla->setCheckState(Qt::Unchecked);
        cocco->setEnabled(true);
        noce->setEnabled(true);
        nocciola->setEnabled(true);
    }
}
void Modifica::checkNocciola(bool f){
    if(f){
        nocciola->setCheckState(Qt::Checked);
        cocco->setEnabled(false);
        noce->setEnabled(false);
        mandorla->setEnabled(false);
    }
    else{
        nocciola->setCheckState(Qt::Unchecked);
        cocco->setEnabled(true);
        noce->setEnabled(true);
        mandorla->setEnabled(true);
    }
}
//RESET_CHECK_FONDENZA
void Modifica::resetFondenza(){
    if(nessuna->isEnabled()==true){
        bassa->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
    if(bassa->isEnabled()==true){
        nessuna->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
    if(media->isEnabled()==true){
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        alta->setEnabled(true);
    }
    if(alta->isEnabled()==true){
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        media->setEnabled(true);
    }
}
void Modifica::checkNessuna(bool f){
    if(f){
        nessuna->setCheckState(Qt::Checked);
        bassa->setEnabled(false);
        media->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        nessuna->setCheckState(Qt::Unchecked);
        bassa->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Modifica::checkBassa(bool f){
    if(f){
        bassa->setCheckState(Qt::Checked);
        nessuna->setEnabled(false);
        media->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        bassa->setCheckState(Qt::Unchecked);
        nessuna->setEnabled(true);
        media->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Modifica::checkMedia(bool f){
    if(f){
        media->setCheckState(Qt::Checked);
        nessuna->setEnabled(false);
        bassa->setEnabled(false);
        alta->setEnabled(false);
    }
    else{
        media->setCheckState(Qt::Unchecked);
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        alta->setEnabled(true);
    }
}
void Modifica::checkAlta(bool f){
    if(f){
        alta->setCheckState(Qt::Checked);
        nessuna->setEnabled(false);
        bassa->setEnabled(false);
        media->setEnabled(false);
    }
    else{
        alta->setCheckState(Qt::Unchecked);
        nessuna->setEnabled(true);
        bassa->setEnabled(true);
        media->setEnabled(true);
    }
}
//RESET_CHECK_GOCCE
void Modifica::resetGocce(){
    if(senza->isEnabled()==true){
        latte->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
    if(latte->isEnabled()==true){
        senza->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
    if(fondente->isEnabled()==true){
        senza->setEnabled(true);
        latte->setEnabled(true);
        bianco->setEnabled(true);
    }
    if(bianco->isEnabled()==true){
        senza->setEnabled(true);
        latte->setEnabled(true);
        fondente->setEnabled(true);
    }
}
void Modifica::checkSenza(bool f){
    if(f){
        senza->setCheckState(Qt::Checked);
        latte->setEnabled(false);
        fondente->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        senza->setCheckState(Qt::Unchecked);
        latte->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Modifica::checkLatte(bool f){
    if(f){
        latte->setCheckState(Qt::Checked);
        senza->setEnabled(false);
        fondente->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        latte->setCheckState(Qt::Unchecked);
        senza->setEnabled(true);
        fondente->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Modifica::checkFondente(bool f){
    if(f){
        fondente->setCheckState(Qt::Checked);
        senza->setEnabled(false);
        latte->setEnabled(false);
        bianco->setEnabled(false);
    }
    else{
        fondente->setCheckState(Qt::Unchecked);
        senza->setEnabled(true);
        latte->setEnabled(true);
        bianco->setEnabled(true);
    }
}
void Modifica::checkBianco(bool f){
    if(f){
        bianco->setCheckState(Qt::Checked);
        senza->setEnabled(false);
        latte->setEnabled(false);
        fondente->setEnabled(false);
    }
    else{
        bianco->setCheckState(Qt::Unchecked);
        senza->setEnabled(true);
        latte->setEnabled(true);
        fondente->setEnabled(true);
    }
}
//RESET_CHECK_FARINE
void Modifica::resetFarine(){
    if(grano->isEnabled()==true){
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
    if(riso->isEnabled()==true){
        grano->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
    if(mandorle->isEnabled()==true){
        grano->setEnabled(true);
        riso->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
    if(castagne->isEnabled()==true){
        grano->setEnabled(true);
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        amaranto->setEnabled(true);
    }
    if(amaranto->isEnabled()==true){
        grano->setEnabled(true);
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
    }
}
void Modifica::checkGrano(bool f){
    if(f){
        grano->setCheckState(Qt::Checked);
        riso->setEnabled(false);
        mandorle->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        grano->setCheckState(Qt::Unchecked);
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Modifica::checkRiso(bool f){
    if(f){
        riso->setCheckState(Qt::Checked);
        grano->setEnabled(false);
        mandorle->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        riso->setCheckState(Qt::Unchecked);
        grano->setEnabled(true);
        mandorle->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Modifica::checkMandorle(bool f){
    if(f){
        mandorle->setCheckState(Qt::Checked);
        grano->setEnabled(false);
        riso->setEnabled(false);
        castagne->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        mandorle->setCheckState(Qt::Unchecked);
        grano->setEnabled(true);
        riso->setEnabled(true);
        castagne->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Modifica::checkCastagne(bool f){
    if(f){
        castagne->setCheckState(Qt::Checked);
        grano->setEnabled(false);
        riso->setEnabled(false);
        mandorle->setEnabled(false);
        amaranto->setEnabled(false);
    }
    else{
        castagne->setCheckState(Qt::Unchecked);
        grano->setEnabled(true);
        riso->setEnabled(true);
        mandorle->setEnabled(true);
        amaranto->setEnabled(true);
    }
}
void Modifica::checkAmaranto(bool f){
    if(f){
        amaranto->setCheckState(Qt::Checked);
        grano->setEnabled(false);
        riso->setEnabled(false);
        castagne->setEnabled(false);
        mandorle->setEnabled(false);
    }
    else{
        amaranto->setCheckState(Qt::Unchecked);
        grano->setEnabled(true);
        riso->setEnabled(true);
        castagne->setEnabled(true);
        mandorle->setEnabled(true);
    }
}
void Modifica::resetDim(){
    if(backer->isEnabled()==true && dritto->isEnabled()==true){
        dimBacker->hide();
        dimDritto->hide();
        lableTipoDimensioni->hide();
    }
}
void Modifica::checkDimensioniB(bool flag){
    lableTipoDimensioni->show();
    if(flag) dritto->setEnabled(false);
    else dritto->setEnabled(true);
    dimBacker->show();
    dimDritto->hide();

}
void Modifica::checkDimensioniD(bool flag){
    lableTipoDimensioni->show();
    if(flag) backer->setEnabled(false);
    else backer->setEnabled(true);
    dimBacker->hide();
    dimDritto->show();
}
void Modifica::setNuoviCampi(){
    prodottoDaModificare->setNome(nome->text().toStdString());
    prodottoDaModificare->setConfezioneRegalo(regalo->isChecked()==true ? true : false);
    consumabile* cons = dynamic_cast<consumabile*>(prodottoDaModificare);
    nonConsumabile* nCons = dynamic_cast<nonConsumabile*>(prodottoDaModificare);
    if(cons!=nullptr){
        cons->setPeso(peso->text().toDouble());
        if(hempI->isChecked()) cons->setErba(true);
        else cons->setErba(false);
        if(prodI->isChecked()) cons->setProduzione(true);
        biscotti* bisc = dynamic_cast<biscotti*>(cons);
        cioccolata* ciocc = dynamic_cast<cioccolata*>(cons);
        infusi* infu = dynamic_cast<infusi*>(cons);
        int farina=0;
        int gocce=0;
        int fondenza=0;
        int granella=0;
        if(bisc!=nullptr){
            if(grano->isChecked()) farina=1;
            else if(riso->isChecked()) farina=2;
            else if(mandorle->isChecked()) farina=3;
            else if(castagne->isChecked()) farina=4;
            else farina=5;
            bisc->setTipoFarina(farina);

            if(latte->isChecked()) gocce=1;
            else if(fondente->isChecked()) gocce=2;
            else if(bianco->isChecked()) gocce=3;
            else gocce=4;
            bisc->setGocceCioccolata(gocce);
        }
        if(ciocc!=nullptr){
            if(nessuna->isChecked()) fondenza=1;
            else if(bassa->isChecked()) fondenza=2;
            else if(media->isChecked()) fondenza=3;
            else fondenza=4;
            ciocc->setLivelloFondenza(fondenza);

            if(cocco->isChecked()) granella=1;
            else if(noce->isChecked()) granella=2;
            else if(mandorla->isChecked()) granella=3;
            else granella=4;
            ciocc->setTipoGranella(granella);

            if(formaC->currentText()=="Stecche")ciocc->setForma(true);
            else ciocc->setForma(false);
        }
        if(infu!=nullptr){
            infu->svuotaAromi();
            infu->setAroma(aroma1->currentText().toStdString());
            if(aroma2->currentText().toStdString()!="Nessun aroma"){
                infu->setAroma(aroma2->currentText().toStdString());
            }
            if(formaC->currentText()=="Sfuso")infu->setSfuso(true);
            else infu->setSfuso(false);

        }
    }
    if(nCons!=nullptr){
        nCons->setColori(colori->currentText().toStdString());
        bong* bng = dynamic_cast<bong*>(nCons);
        vaporizzatore* vapo = dynamic_cast<vaporizzatore*>(nCons);
        grinder* grd = dynamic_cast<grinder*>(nCons);
        int alt=0;
        int capacita=0;
        int velocitaE=0;
        int denti=0;
        if(bng!=nullptr){
            if(backer->isChecked()){
                bng->setForma(true);
                if(dimBacker->currentText()=="33X4.6 cm")alt=5;
                else alt=6;
                bng->setAltezza(alt);
                bng->setLarghezza(4.6);
            }
            else if(dritto->isChecked()){
                bng->setForma(false);
                if(dimDritto->currentText()=="24X3.1 cm"){
                    alt=1;
                    bng->setLarghezza(3.1);
                }
                if(dimDritto->currentText()=="32X4.1 cm"){
                    alt=2;
                    bng->setLarghezza(4.1);
                }
                if(dimDritto->currentText()=="37X5.3 cm"){
                    alt=3;
                    bng->setLarghezza(5.3);
                }
                if(dimDritto->currentText()=="46X6.7 cm"){
                    alt=4;
                    bng->setLarghezza(6.7);
                }
                bng->setAltezza(alt);
            }
        }
        if(vapo!=nullptr){

           if(schermo->currentText()=="Schermo") vapo->setSchermo(true);
           else vapo->setSchermo(false);

           if(capienza->currentText()=="1 gr") capacita=1;
           else if(capienza->currentText()=="2 gr")capacita=2;
           else if(capienza->currentText()=="3 gr")capacita=3;
           else capacita=4;
           vapo->setCapienza(capacita);

           if(velocita->currentText()=="Lv 1") velocitaE=1;
           else if(velocita->currentText()=="Lv 2") velocitaE=2;
           else velocitaE=3;
           vapo->setVelocitaEvaporazione(velocitaE);
        }
        if(grd!=nullptr){
            if(ndenti->currentText()=="6") denti=6;
            else if(ndenti->currentText()=="12") denti=12;
            else if(ndenti->currentText()=="24") denti=24;
            else if(ndenti->currentText()=="30") denti=30;
            else if(ndenti->currentText()=="36") denti=36;
            grd->setNdenti(denti);

            if(raccoglipoll->currentText()=="Con raccogli polline") grd->setRaccogliPolline(true);
            else grd->setRaccogliPolline(false);
        }
    }
}
QPushButton* Modifica::getSalvaMod() const {
    return salva;
}
