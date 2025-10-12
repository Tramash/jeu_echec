#ifndef DAME_H
#define DAME_H

#include <Piece.h>


class Dame : public Piece
{
    public:
        Dame();
        virtual ~Dame();
        
        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // DAME_H
