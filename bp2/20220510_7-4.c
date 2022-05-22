#include <stdio.h>
#include <limits.h>
//入力のposの最小値は1
unsigned set(unsigned x, int pos){
    unsigned mask = 1 << (pos - 1);
    return x | mask;
}

//入力のposの最小値は1
unsigned reset(unsigned x, int pos){
    unsigned mask = 1 << (pos - 1);
    return x & ~(mask);
}

unsigned inverse(unsigned x, int pos){
    unsigned mask = 1 << (pos - 1);
    return x ^ mask;
}


int main(void){
    unsigned data = 123;
    int pos = 5;
    printf("input data:%u\n", data);
    printf("pos:%u\n", pos);
    printf("set:%u\nreset:%u\ninverse%u\n",set(data, pos),reset(data, pos), inverse(data, pos));
}

/*
実行結果:
input data:123
pos:5
set:123
reset:107
inverse107
*/