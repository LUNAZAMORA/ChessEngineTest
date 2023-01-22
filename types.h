#include <cassert>
#include <cstdint>

typedef uint64_t  Bitboard;  
typedef uint16_t Move;


#define C64(constantU64) constantU64##ULL
enum Color{
    WHITE = 0, 
    BLACK = 1
};

/*
inline Color toggleColor(Color col){
    return col ^ BLACK;
}
*/

enum PieceType
{
   pnil   = 0, // empty
   wpawn  = 1,
   bpawn  = 2,
   knight = 3,
   bishop = 4,
   rook   = 5,
   queen  = 6,
   king   = 7,
};

enum File {
  A_File = 0,
  B_File = 1,
  C_File = 2,
  D_File = 3,
  E_File = 4,
  F_File = 5,
  G_File = 6,
  H_File = 7,
};


enum Rank {
  Rank_1 = 0,
  Rank_2 = 1,
  Rank_3 = 2,
  Rank_4 = 3,
  Rank_5 = 4,
  Rank_6 = 5,
  Rank_7 = 6,
  Rank_8 = 7,
};
enum Square {
  a1, b1, c1, d1, e1, f1, g1, h1,
  a2, b2, c2, d2, e2, f2, g2, h2,
  a3, b3, c3, d3, e3, f3, g3, h3,
  a4, b4, c4, d4, e4, f4, g4, h4,
  a5, b5, c5, d5, e5, f5, g5, h5,
  a6, b6, c6, d6, e6, f6, g6, h6,
  a7, b7, c7, d7, e7, f7, g7, h7,
  a8, b8, c8, d8, e8, f8, g8, h8, 
  inval
};

enum Directions{
  north = 8,
  east = 1,
  south = -north,
  west = -east,
  noEast = north + east,
  soEast = south + east,
  soWest = south + west,
  noWest = north + west
};

constexpr bool squaresOnSameDiagonal(Square sq1, Square sq2) {
  return ((sq2 - sq1) & 7) == ((sq2>>3) - (sq1>>3));
}

constexpr bool squaresOnSameAntiDiagonal(Square sq1, Square sq2) {
  return ((sq2 - sq1) & 7) + ((sq2>>3) - (sq1>>3)) == 0;
}

enum KnightDirections {
  noNorthEast = 17,
  noNorthWest = 15,
  noEastEast = 10,
  noWestWest = 6,
  soSouthWest = -noNorthEast,
  soSouthEast = -noNorthWest,
  soWestWest = -noEastEast,
  soEastEast = -noWestWest
};

/*Such a move encoding conveniently fits inside 
a 16-bit word, 6 bits 
for from-to square each
 to index a butterfly board,
  still leaves a nibble for
   flags for move kind and 
   promoted piece code, for instance this arbitrary flags:
   the flas are
   
   
*/

enum MoveType {
  NullMove,
  Normal,
  Castling = 2 << 12,
  Promotion = 1 << 15,
  EnPasseant = 5 << 12,
};

enum MoveFlags {
  capture_flag = 1 << 14, 
  ep_capture,

};

constexpr Move cMove(Square from, Square to, unsigned int flags)
{
  return (Move) ((flags &  0xf) << 12) | ((from & 0x3f) << 6) | (to & 0x3f);
}


constexpr Move getTo(Move m) {return m & 0x3f;}
constexpr Move getFrom(Move m) {return (m >> 6) & 0x3f;}
constexpr Move getFlags(Move m) {return (m >> 12) & 0x0f;}

constexpr void setTo(Move m, Move to) {m &= ~0x3f; m|= to & 0x3f;}
constexpr void setFrom(Move m, Move from) {m &= ~0xfc0; m |= (from & 0x3f) << 6;}
constexpr void set_EP_FLAG(Move m) {}