#ifndef CAVALIER_H
#define CAVALIER_H

#include <Piece.h>


class Cavalier : public Piece
{
    public:
        Cavalier();
        virtual ~Cavalier();

        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // CAVALIER_H
