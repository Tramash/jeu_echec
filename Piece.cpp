#include "Piece.h"
#include <iostream>   
#include <stdio.h>

Piece::Piece()
{
    //ctor
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
            piece = 'D'; 
            break;  
        case ROI :
            piece = 'R'; 
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
            piece = 'd'; 
            break;  
        case ROI :
            piece = 'r'; 
            break; 
        case PION :
            piece = 'p'; 
            break;                                     
    }
    std::cout << piece;   

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
