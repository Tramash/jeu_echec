#ifndef TOUR_H
#define TOUR_H

#include "Piece.h"   

class Tour : public Piece
{
    public:
        Tour();              
        virtual ~Tour();     

        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // TOUR_H
