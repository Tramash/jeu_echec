#ifndef PIECE_H
#define PIECE_H

struct Position
{
    int x;
    int y;
};
typedef struct Position Position;

enum Couleur {Blanc = 0, Noir = 1};
enum Type {TOUR, FOU, CAVALIER, DAME, ROI, PION};


class Piece
{
    public:
        Piece(); // constructeur
        virtual ~Piece(); // desctructeur

        bool deplacement(Position initiale, Position finale); // permet de tester si le déplacement de la pièce est licite
        void print(); // afficher le pion présent dans la case

        Couleur getCouleur(); // associer a une variable de type Couleur
        void setCouleur(Couleur couleur);

        Type getType(); // associer a une variable de type Type
        void setType(Type type);

    protected:

    private:
        Couleur couleur;
        Type type;

};

#endif // PIECE_H
