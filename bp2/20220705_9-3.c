#include <stdio.h>

#define N 128

int main(void){
    int i;
    char s[N][128];
    for(i = 0; i < N; i++){
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$')
            break;
    }
    for(i = 0; i < N; i++){
        printf("s[%d] = \"%s\"\n", i, s[i]);
        if(s[i+1][0] == '$' && s[i+1][1] == '$' && s[i+1][2] == '$' && s[i+1][3] == '$')
            break;
    }
    return 0;
}

/*
//実行結果
PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220705_9-3.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
s[0] : Paul
s[1] : John
s[2] : George
s[0] = "Paul"
s[1] = "John"
s[2] = "George"
s[3] = "$$"
s[4] = "$$$$"
PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220705_9-3.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
s[0] : paul
s[1] : john
s[2] : george
s[3] : $
s[4] : $$$$
s[0] = "paul"
s[1] = "john"
s[2] = "george"
s[3] = "$"
*/