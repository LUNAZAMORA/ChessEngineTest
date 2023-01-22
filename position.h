#include <cassert>
#include "types.h"
#include "Bitboardv1.h"

/* 
4 bits for castling rights 2 for each side, 2^2 = 4 possible combinations
The prequisites for doing it are as follows:

- the king and the relevant rook must not be moved, considered as castling rights inside a chess position
- the king must not be in check
- no square between king's start and final square may be controlled by the enemy
*/

class Position{
    private: 
        BoardV1::Board PiecePlacement;
        Color sideToMove;
        unsigned int CastlingRights;
        unsigned int halfmoveClock;
    public:
        Color side_to_move()const{}
};

inline Color Position::side_to_move() const{return sideToMove;}
