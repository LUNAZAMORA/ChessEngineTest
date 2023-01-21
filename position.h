#include <cassert>
#include "types.h"
#include "Bitboardv1.h"


class Position{
    private: 
        BoardV1::Board PiecePlacement;
        Color sideToMove;
    public:
        Color side_to_move()const{}
};

inline Color Position::side_to_move() const{return sideToMove;}
