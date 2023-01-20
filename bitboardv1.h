#include <vector>
#include <bitset>
#include "types.h"

namespace BoardV1{

    constexpr Bitboard a_fileBB = 0x0101010101010101;
    constexpr Bitboard b_fileBB = a_fileBB << 1;
    constexpr Bitboard c_fileBB = a_fileBB << 2;
    constexpr Bitboard d_fileBB = a_fileBB << 3;
    constexpr Bitboard e_fileBB = a_fileBB << 4;
    constexpr Bitboard f_fileBB = a_fileBB << 5;
    constexpr Bitboard g_fileBB = a_fileBB << 6;
    constexpr Bitboard h_fileBB = a_fileBB << 7;

    constexpr Bitboard rank_1BB = 0xFF;
    constexpr Bitboard rank_2BB = rank_1BB << (8*1);
    constexpr Bitboard rank_3BB = rank_1BB << (8*2);
    constexpr Bitboard rank_4BB = rank_1BB << (8*3);
    constexpr Bitboard rank_5BB = rank_1BB << (8*4);
    constexpr Bitboard rank_6BB = rank_1BB << (8*5);
    constexpr Bitboard rank_7BB = rank_1BB << (8*6);
    constexpr Bitboard rank_8BB = rank_1BB << (8*7);


    constexpr Bitboard a1_h8_diagonal = 0x8040201008040201;
    constexpr Bitboard a1_h8_anti_diagonal = 0x0102040810204080;
    constexpr Bitboard light_squares = 0x55AA55AA55AA55AA;
    constexpr Bitboard dark_squares = 0xAA55AA55AA55AA55;

    class Board{
        Bitboard pieceBB[14];
        Bitboard emptyBB;
        Bitboard ocupiedBB;
        
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
}