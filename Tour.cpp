#include "Tour.h"

Tour::Tour()
{
    //ctor
    setType(TOUR);        
    setCouleur(Blanc);    
}

Tour::~Tour()
{
    //dtor
}

bool Tour::deplacement(Position initiale, Position finale)
{
    // deplacement horizontal OU vertical
    if (initiale.x == finale.x || initiale.y == finale.y)
        return true;
    else
        return false;
}
