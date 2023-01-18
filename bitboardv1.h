#include <vector>
#include <bitset>
#include "types.h"

using U64 = std::bitset<64>;
class Bitboardv1{
    U64 pieceBB[14];
    U64 emptyBB;
    U64 ocupiedBB;
    
    public:
        enum enumPiece
        {
            nWhite,     // any white piece
            nBlack,     // any black piece
            nWhitePawn, // white Pawn
            nBlackPawn, // black Pawn
            nWhiteKnight, // white Knight
            nBlackKnight, // black Knight
            nWhiteBishop, // white Bishop
            nBlackBishop, // black Bishop
            nWhiteRook, // white Rook
            nBlackRook, // black Rook
            nWhiteQueen, // white Queen
            nBlackQueen, // black Queen
            nWhiteKing, // white King
            nBlackKing, // black King
        };

        U64 getPieceSet(PieceType pt) const {return pieceBB[pt];}

        U64 getWhitePawns() const {return pieceBB[nWhitePawn];}
        U64 getBlackPawns() const {return pieceBB[nBlackPawn];}
        U64 getWhiteKnight() const {return pieceBB[nWhiteKnight];}
        U64 getBlackKninght() const {return pieceBB[nBlackKnight];}
        U64 getWhiteBishop() const {return pieceBB[nWhiteBishop];}
        U64 getBlackBishop() const {return pieceBB[nBlackBishop];}
        U64 getWhiteRook() const {return pieceBB[nWhiteRook];}
        U64 getBlackRook() const {return pieceBB[nBlackRook];}
        U64 getWhiteQueen() const {return pieceBB[nWhiteQueen];}
        U64 getBlackQueen() const {return pieceBB[nBlackQueen];}
        U64 getWhiteKing() const {return pieceBB[nWhiteKing];}
        U64 getBlackKing() const {return pieceBB[nBlackKing];}

        U64 getPawns(Color ct) const {return pieceBB[nWhitePawn + ct];}
        U64 getKnights(Color ct) const {return pieceBB[nWhiteKnight + ct];}
        U64 getBishops(Color ct) const {return pieceBB[nWhitePawn + ct];}
        U64 getRook(Color ct) const {return pieceBB[nWhiteKnight + ct];}
        U64 getQueen(Color ct) const {return pieceBB[nWhitePawn + ct];}
        U64 getKing(Color ct) const {return pieceBB[nWhiteKnight + ct];}

};