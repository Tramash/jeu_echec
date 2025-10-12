#ifndef FOU_H
#define FOU_H

#include <Piece.h>


class Fou : public Piece
{
    public:
        Fou();
        virtual ~Fou();

        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // FOU_H
