#ifndef INSERISCI_H
#define INSERISCI_H
#include<QWidget>
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




#include"GUI/elementoWidget.h"
class Inserisci: public QWidget {
    Q_OBJECT
private:
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
    QLabel*         lableTipoProdotto;
    QComboBox*      tipoProdotto;

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

    QPushButton*    inserisci;
    QLabel*         labelObbligatorio;

public:
    Inserisci(QWidget* = nullptr);
    QPushButton* getInserisciBut() const;
    prodotto* nuovoProdotto();

    void resetInserisci();
    void resetCambioProdotto();

public slots:
    void scelteBiscotti();
    void scelteCioccolato();
    void scelteInfusi();

    void scelteFormaBong();
    void scelteDimensioniB(bool);
    void scelteDimensioniD(bool);
    void scelteVapo();
    void scelteGrinder();

    void nessunProdSel();
    void resetDim();


    //CHECKFARINE
    void checkGrano(bool);
    void checkRiso(bool);
    void checkMandorle(bool);
    void checkCastagne(bool);
    void checkAmaranto(bool);
    //CHECKGOCCE
    void checkSenza(bool);
    void checkLatte(bool);
    void checkFondente(bool);
    void checkBianco(bool);
    //CHECKFONDENZA
    void checkNessuna(bool);
    void checkBassa(bool);
    void checkMedia(bool);
    void checkAlta(bool);
    //CHECKGRANELLA
    void checkCocco(bool);
    void checkNoce(bool);
    void checkMandorla(bool);
    void checkNocciola(bool);
    //CHECKHEMP
    void checkIndica(bool);
    void checkSativa(bool);
    //CHECKPRODUZIONE
    void checkIndoor(bool);
    void checkOutdoor(bool);


};
#endif // INSERISCI_H
