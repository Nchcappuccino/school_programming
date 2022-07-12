#include <stdio.h>

void put_stringr(const char s[]){
    int i = 0;
    int j = 0;
    while(s[i])
        i++;
    for(int j = i-1; i >= 0; i--){
        printf("%c", s[i]);
    }
}
int main(void){
    char str[128];
    printf("please input string:");
    scanf("%s", str);
    printf("put_stringr\n");
    put_stringr(str);
    return 0;
}

/*
実行結果

PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220712_9-8.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
please input string:SEC
put_stringr
CES
*/