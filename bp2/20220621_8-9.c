#include <stdio.h>

int main(void){
    int calm = 1;
    int ch;
    while((ch = getchar()) != EOF){
        if(ch == '\n'){
            calm++;
        }
    }
    printf("calm = %d\n", calm);
    return 0;
}

/*
PS C:\Users\yudai\Desktop\school_programming\bp2> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220621_8-9.c
PS C:\Users\yudai\Desktop\school_programming\bp2> c:\Users\yudai\Desktop\school_programming\bp2\a.exe
1
1
1
1
1
^Z
calm = 6
*/