#include "Cavalier.h"

Cavalier::Cavalier()
{
    //ctor
    setCouleur(Blanc);
    setType(CAVALIER);
}

Cavalier::~Cavalier()
{
    //dtor
}

bool Cavalier::deplacement(Position initiale, Position finale)
{
    int Px = (initiale.x - finale.x) ;
    int Py = (initiale.y - finale.y);
    if (Px == 1 && Py == 2 || Px == 2 && Py == 1 )
        return true;
    else 
        return false;

}
