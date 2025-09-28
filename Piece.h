#ifndef PIECE_H
#define PIECE_H

struct Position
{
    int x;
    int y;
};
typedef struct Position Position;

enum Couleur {Blanc = 0, Noir = 1};
enum Type {Tour, Fou, Cavalier, Reine, Roi, Pion};


class Piece
{
    public:
        Piece();
        virtual ~Piece();

        bool deplacement(Position initiale, Position finale);
        void print();

        Couleur getCouleur();
        void setCouleur(Couleur couleur);

        Type getType();
        void setType(Type type);

    protected:

    private:
        Couleur couleur;
        Type type;

};

#endif // PIECE_H
