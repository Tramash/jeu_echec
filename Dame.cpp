#include "Dame.h"

Dame::Dame()
{
    //ctor
    setCouleur(Blanc);
    setType(DAME);
}

Dame::~Dame()
{
    //dtor
}

bool Dame::deplacement(Position initiale, Position finale)
{
    int Px = (initiale.x - finale.x) ;
    int Py = (initiale.y - finale.y);
    if (Px == Py ||initiale.x == finale.x || initiale.y == finale.y)
        return true;
    else 
        return false;

}