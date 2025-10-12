#include "Pion.h"

Pion::Pion()
{
    //ctor
    setCouleur(Blanc);
    setType(PION);
}

Pion::~Pion()
{
    //dtor
}

bool Pion::deplacement(Position initiale, Position finale)
{
    int Px = (initiale.x - finale.x) ;
    int Py = (initiale.y - finale.y);
    if (Px == 0 && Py == 1)
        return true;
    else 
        return false;

}
