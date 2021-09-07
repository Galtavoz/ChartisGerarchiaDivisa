#ifndef MODIFICA_H
#define MODIFICA_H
#include<QDebug>
#include<QWidget>
#include<QDialog>
#include<QLineEdit>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include<QCheckBox>
#include<QListWidget>
#include<QLabel>
#include<QScrollBar>
#include<QComboBox>
#include<vector>



#include "prodotto.h"
#include "consumabile.h"
#include "nonConsumabile.h"
#include "biscotti.h"
#include "cioccolata.h"
#include "infusi.h"
#include "grinder.h"
#include "vaporizzatore.h"
#include "bong.h"
#include "container.h"
#include"GUI/elementoWidget.h"
class Modifica: public QDialog {
    Q_OBJECT
private:
    prodotto*       prodottoDaModificare;
    QWidget*        parent;
    QLabel*         labelNomeRegalo;
    QLineEdit*      nome;
    QCheckBox*      regalo;
    QLabel*         labelIngredienti;
    QLabel*         labelPeso;
    QLineEdit*      peso;
    QLabel*         labelHemp;
    QCheckBox*      hempI;
    QCheckBox*      hempS;
    QLabel*         labelProd;
    QCheckBox*      prodI;
    QCheckBox*      prodO;
    QLabel*         labelColori;
    QComboBox*      colori;

    //CONSUMABILI
    QLabel*         tipoProdotto;
    QLabel*         lableTipoFarine;
    QCheckBox*      grano;
    QCheckBox*      riso;
    QCheckBox*      mandorle;
    QCheckBox*      castagne;
    QCheckBox*      amaranto;

    QLabel*         lableTipoGocce;
    QCheckBox*      senza;
    QCheckBox*      latte;
    QCheckBox*      fondente;
    QCheckBox*      bianco;

    QLabel*         lableLvFondenza;
    QCheckBox*      nessuna;
    QCheckBox*      bassa;
    QCheckBox*      media;
    QCheckBox*      alta;

    QLabel*         lableTipoGranella;
    QCheckBox*      cocco;
    QCheckBox*      noce;
    QCheckBox*      mandorla;
    QCheckBox*      nocciola;

    QLabel*         lableFormaC;
    QComboBox*      formaC;

    QLabel*         lableTipoAroma1;
    QComboBox*      aroma1;
    QLabel*         lableTipoAroma2;
    QComboBox*      aroma2;
    QLabel*         lableSfuso;
    QComboBox*      sfuso;

    //NON CONSUMABILI
    QLabel*         lableTipoBong;
    QCheckBox*      backer;
    QCheckBox*      dritto;
    QLabel*         lableTipoDimensioni;
    QComboBox*      dimBacker;
    QComboBox*      dimDritto;

    QLabel*         lableSchermo;
    QComboBox*      schermo;
    QLabel*         lableCapienza;
    QComboBox*      capienza;
    QLabel*         lableVelocita;
    QComboBox*      velocita;

    QLabel*         lableNDenti;
    QComboBox*      ndenti;
    QLabel*         lableRaccPoll;
    QComboBox*      raccoglipoll;

    QPushButton*    salva;
public:
   Modifica(QWidget* = nullptr);
   void setProdotto(prodotto*);
   void compilaModifica();
   void setNuoviCampi();
   QPushButton* getSalvaMod() const;
public slots:

   //RESET_CHECK_BONG
   void resetDim();
   void checkDimensioniB(bool);
   void checkDimensioniD(bool);


   //RESET_CHECK_FARINE
   void resetFarine();
   void checkGrano(bool);
   void checkRiso(bool);
   void checkMandorle(bool);
   void checkCastagne(bool);
   void checkAmaranto(bool);

   //RESET_CHECK_GOCCE
   void resetGocce();
   void checkSenza(bool);
   void checkLatte(bool);
   void checkFondente(bool);
   void checkBianco(bool);

   //RESET_CHECK_FONDENZA
   void resetFondenza();
   void checkNessuna(bool);
   void checkBassa(bool);
   void checkMedia(bool);
   void checkAlta(bool);

   //RESET_CHECK_GRANELLA
   void resetGranella();
   void checkCocco(bool);
   void checkNoce(bool);
   void checkMandorla(bool);
   void checkNocciola(bool);

   //RESET_CHECK_HEMP
   void resetHemp();
   void checkIndica(bool);
   void checkSativa(bool);

   //RESET_CHECK_PRODUZIONE
   void resetProduzione();
   void checkIndoor(bool);
   void checkOutdoor(bool);
};

#endif // MODIFICA_H
