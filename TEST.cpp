// echiquier.cpp
#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <iomanip>

// Représente une pièce (type + couleur)
struct Piece {
    // type: 'K','Q','R','B','N','P' pour roi,dame,tour,fou,cavalier,pion
    // ' ' (espace) = case vide
    char type;
    bool white;
    Piece(char t = ' ', bool w = true) : type(t), white(w) {}
    bool empty() const { return type == ' '; }

    // renvoie le symbole unicode (wstring) ou ascii si unicode = false
    std::wstring symbol_unicode() const {
        if (empty()) return L"·"; // petit point pour case vide
        switch (type) {
            case 'K': return white ? L"♔" : L"♚";
            case 'Q': return white ? L"♕" : L"♛";
            case 'R': return white ? L"♖" : L"♜";
            case 'B': return white ? L"♗" : L"♝";
            case 'N': return white ? L"♘" : L"♞";
            case 'P': return white ? L"♙" : L"♟";
            default:  return L"?";
        }
    }
    std::string symbol_ascii() const {
        if (empty()) return ".";
        char c = type;
        if (!white) c = std::tolower(c);
        return std::string(1, c);
    }
};

// Plateau 8x8, indices [rank][file] avec rank 0 = rangée 8 (pour affichage naturel)
struct Board {
    std::vector<std::vector<Piece>> b;
    Board() : b(8, std::vector<Piece>(8, Piece())) {}

    // placer une pièce (fichier a-h => 0-7, rang 1-8 => 0-7)
    void set_piece(int rank_index, int file_index, Piece p) {
        if (rank_index<0||rank_index>7||file_index<0||file_index>7) return;
        b[rank_index][file_index] = p;
    }

    // initialisation standard
    void setup_start_position() {
        // rang 8 (index 0) : tours, cavaliers, fous, dame, roi, ...
        std::string back = "RNBQKBNR";
        for (int i = 0; i < 8; ++i) {
            b[0][i] = Piece(back[i], false); // noir sur la rangée 8
            b[1][i] = Piece('P', false);     // pions noirs rangée 7
            b[6][i] = Piece('P', true);      // pions blancs rangée 2
            b[7][i] = Piece(back[i], true);  // blanches rangée 1
        }
    }

    // affiche en Unicode (si possible)
    void print_unicode() const {
        // configure locale wide pour wcout
        std::wcout << std::setw(3) << L""; // petit alignement
        // en-tête des fichiers
        for (int f = 0; f < 8; ++f) {
            wchar_t file = L'a' + f;
            std::wcout << L" " << file << L" ";
        }
        std::wcout << L"\n";

        for (int r = 0; r < 8; ++r) {
            int rank = 8 - r;
            std::wcout << std::setw(2) << rank << L" "; // numéro de rang
            for (int f = 0; f < 8; ++f) {
                std::wstring s = b[r][f].symbol_unicode();
                // garantir largeur uniforme :
                if (s.size()==1) std::wcout << L" " << s << L" ";
                else std::wcout << s << L" ";
            }
            std::wcout << L" " << rank << L"\n";
        }
        // bas
        std::wcout << std::setw(3) << L"";
        for (int f = 0; f < 8; ++f) {
            wchar_t file = L'a' + f;
            std::wcout << L" " << file << L" ";
        }
        std::wcout << L"\n";
    }

    // affiche en ASCII simple
    void print_ascii() const {
        std::cout << "   ";
        for (int f = 0; f < 8; ++f) std::cout << " " << char('a'+f) << " ";
        std::cout << "\n";
        for (int r = 0; r < 8; ++r) {
            int rank = 8 - r;
            std::cout << std::setw(2) << rank << " ";
            for (int f = 0; f < 8; ++f) {
                std::cout << " " << b[r][f].symbol_ascii() << " ";
            }
            std::cout << " " << rank << "\n";
        }
        std::cout << "   ";
        for (int f = 0; f < 8; ++f) std::cout << " " << char('a'+f) << " ";
        std::cout << "\n";
    }
};

int main() {
    // activer la locale pour wcout (permet d'afficher les symboles Unicode sur la plupart des systèmes)
    try {
        std::locale::global(std::locale(""));
        std::wcout.imbue(std::locale());
    } catch (...) {
        // si échec de la locale, on continue quand même ; l'utilisateur pourra utiliser l'ASCII fallback
    }

    Board board;
    board.setup_start_position();

    // affichage Unicode
    std::wcout << L"\nPlateau (Unicode) :\n";
    board.print_unicode();

    // affichage ASCII fallback
    std::cout << "\nPlateau (ASCII fallback) :\n";
    board.print_ascii();

    // Exemple : déplacer le pion blanc de e2 à e4 (modif simple)
    // rang e2 = rank index 6, file e = 4 ; e4 = rank index 4
    board.set_piece(6, 4, Piece());     // enlever de e2
    board.set_piece(4, 4, Piece('P', true)); // placer en e4

    std::wcout << L"\nAprès 1.e4 (Unicode) :\n";
    board.print_unicode();

    return 0;
}
