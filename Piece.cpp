#include "Piece.h"
#include <iostream>   

Piece::Piece()
{
    //ctor
    couleur = Blanc;
    type = PION; 
}

Piece::~Piece()
{
    //dtor
}


bool Piece::deplacement(Position initiale, Position finale)
{
    return false;
}

void Piece::print()
{
    char piece ('?');

    switch (type)
    {
        case TOUR :
            piece = 'T'; 
            break;
        case FOU :
            piece = 'F'; 
            break;
        case CAVALIER :
            piece = 'C'; 
            break;
        case DAME :
            piece = 'RE'; 
            break;  
        case ROI :
            piece = 'RO'; 
            break; 
        case PION :
            piece = 'P'; 
            break;                                     
    }

    if (piece == Noir);
    switch (type)
    {
        case TOUR :
            piece = 't'; 
            break;
        case FOU :
            piece = 'f'; 
            break;
        case CAVALIER :
            piece = 'c'; 
            break;
        case DAME :
            piece = 're'; 
            break;  
        case ROI :
            piece = 'ro'; 
            break; 
        case PION :
            piece = 'p'; 
            break;                                     
    }
    std::cout << piece;   // <-- std::cout au lieu de cout seul


}

Couleur Piece::getCouleur()
{
    return couleur;
}

void Piece::setCouleur(Couleur couleur)
{
    couleur = couleur;
}

Type Piece::getType()
{
    return type;
}

void Piece::setType(Type type)
{
    type = type;
}
