#ifndef PION_H
#define PION_H

#include <Piece.h>


class Pion : public Piece
{

    public:
        Pion();
        virtual ~Pion();

        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // PION_H
