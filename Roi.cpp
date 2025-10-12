#include "Roi.h"

Roi::Roi()
{
    //ctor
    setCouleur(Blanc);
    setType(ROI);
}

Roi::~Roi()
{
    //dtor
}

bool Roi::deplacement(Position initiale, Position finale)
{
    int Px = (initiale.x - finale.x) ;
    int Py = (initiale.y - finale.y);
    if (Px == Py == 1 || Px == 0 && Py  == 1 || Px == 1 && Py  == 0)
        return true;
    else 
        return false;

}
