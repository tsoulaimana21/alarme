#include "clavier.h"
#include "ui_clavier.h"

clavier::clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::clavier)
    ,leDetecteur(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&clavier::TraiterChiffre);
     connect(&timerLed,&QTimer::timeout,this,&clavier::onTimerLed_timeout);
}

clavier::~clavier()
{
    delete ui;
}


void clavier::on_pushButton_Marche_clicked()
{
     timerLed.start(500);
}

void clavier::on_pushButton_Arret_clicked()
{
    timerLed.stop();
}

void clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}

void clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
           ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
       else
           ui->checkBoxLedRouge->setCheckState(Qt::Checked);
}




void clavier::on_pushButton_2_clicked()
{
    if(leDetecteur==nullptr){
        leDetecteur = new Detecteur;
        leDetecteur->show();
    }
}


void clavier::on_pushButton_3_clicked()
{
    if(leDetecteur!=nullptr){
        leDetecteur->hide();
        delete leDetecteur;
        leDetecteur=nullptr;
    }
}

