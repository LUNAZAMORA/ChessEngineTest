#include <iostream>
#include <bitset>
#include "types.h"

#define get_bit_at(num, i) (1ULL << i) & (num)? 1 : 0
#define set_bit(num, i) ((num) |= (1ULL << i))

typedef uint64_t U64;

//1 or x = 1 
// 0 or x = x
// 1 and x = x
// 0 and x = = 0
void print_board_repr(){
    int matrix[8][8];
    int count = 0;
    for(int i = 0; i<8; i++){
        for(int j = 0; j< 8;j++){
            matrix[i][j] = count++;
        }
    }
    for(int i = 0; i<8; i++){
        for(int j = 0; j< 8;j++){
            std::cout << matrix[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

int main(){
    print_board_repr();
    U64 WQueen = 0x0;
    set_bit(WQueen, c3);
    std::cout << std::hex << WQueen << std::endl;
    std::cout << "Testing function :" << std::endl;
    for(int i = 0; i < 64; i++){
        printf("Bit at: %d is: %d\n", i, get_bit_at(WQueen, i));
    }
    return 0;
}

