#include <stdio.h>

void rev_string(char s[]){
    char temp[128];
    int i = 0, j = 0;
    for(i = 0; i < 128+1; i++)
        temp[i] = '\0';
    i = 0;
    int size = 0;
    while(s[i])
        i++;
    size = i;
    for(j = 0; j < size; j++){
        temp[j] = s[i - j - 1];
    }
    i = 0;
    while(temp[i]){
        s[i] = temp[i];
        i++;
    }
}

int main(void){
    char str[128];
    printf("please input string:");
    scanf("%s", str);
    printf("before:%s\n", str);
    rev_string(str);
    printf("after:%s\n", str);
    return 0;
}

/*
実行結果

PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220712_9-9.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
please input string:SEC
before:SEC
after:CES
*/