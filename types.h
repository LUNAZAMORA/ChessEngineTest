#include <cassert>

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
   pt_pnil   = 0, // empty
   pt_wpawn  = 1,
   pt_bpawn  = 2,
   pt_knight = 3,
   pt_bishop = 4,
   pt_rook   = 5,
   pt_queen  = 6,
   pt_king   = 7,
};

enum enumFile {
  A_File = 0,
  B_File = 1,
  C_File = 2,
  D_File = 3,
  E_File = 4,
  F_File = 5,
  G_File = 6,
  H_File = 7,
};


enum enumRank {
  Rank_1 = 0,
  Rank_2 = 1,
  Rank_3 = 2,
  Rank_4 = 3,
  Rank_5 = 4,
  Rank_6 = 5,
  Rank_7 = 6,
  Rank_8 = 7,
};
enum enumSquare {
  a1, a2, a3, a4, a5, a6, a7, a8,
  b1, b2, b3, b4, b5, b6, b7, b8,
  c1, c2, c3, c4, c5, c6, c7, c8,
  d1, d2, d3, d4, d5, d6, d7, d8,
  e1, e2, e3, e4, e5, e6, e7, e8,
  f1, f2, f3, f4, f5, f6, f7, f8,
  g1, g2, g3, g4, g5, g6, g7, g8,
  h1, h2, h3, h4, h5, h6, h7, h8
};
enum Moves{
    
};