#include <stdio.h>

enum Sex{
    Male = 0,
    Female = 1,
    Invailid = 2
};

void male(void){
    printf("こちらは男子トイレです\n");
}

void female(void){
    printf("こちらは女子トイレです\n");
}

enum Sex select(void){
    int tmp;
    do{
        printf("0-Male 1-Female  2-終了 : ");
        scanf("%d", &tmp);
    }while(tmp < Male || tmp > Invailid);
    return tmp;
}

int main(void){
    enum Sex selected;
    do{
        switch (selected = select()){
            case Male:
                male();
                break;
            case Female:
                female();
                break;
        }
    }while(selected != Invailid);
    return 0;
}

/*
実行結果
PS C:\Users\yudai\Desktop\school_programming\bp2> gcc 20220531_8-5.c
PS C:\Users\yudai\Desktop\school_programming\bp2> c:\Users\yudai\Desktop\school_programming\bp2\a.exe
0-Male 1-Female  2-終了 : 0
こちらは男子トイレです
0-Male 1-Female  2-終了 : 1
こちらは女子トイレです
0-Male 1-Female  2-終了 : 0
こちらは男子トイレです
0-Male 1-Female  2-終了 : 2

*/