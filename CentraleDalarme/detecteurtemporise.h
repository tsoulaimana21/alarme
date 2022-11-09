#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>


class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
private:
    Detecteur *leDetecteur;
};

#endif // DETECTEURTEMPORISE_H
