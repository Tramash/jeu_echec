#include "Fou.h"

Fou::Fou()
{
    //ctor
}

Fou::~Fou()
{
    //dtor
}

bool Fou::deplacement(Position initiale, Position finale)
{
    int Px = (initiale.x - finale.x) ;
    int Py = (initiale.y - finale.y);
    if (Px == Py)
        return true;
    else 
        return false;

}