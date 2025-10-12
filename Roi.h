#ifndef ROI_H
#define ROI_H

#include <Piece.h>


class Roi : public Piece
{
    public:
        Roi();
        virtual ~Roi();

        bool deplacement(Position initiale, Position finale);  

    protected:

    private:
};

#endif // ROI_H
