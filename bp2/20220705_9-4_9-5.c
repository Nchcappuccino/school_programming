#include <stdio.h>

void null_string(char s[]){
    s[0] = '\0';
}

int str_char(const char s[], int c){
    int i = 0;
    while(s[i]){
        if(s[i] == c)
            return i;
        i++;
    }
    return -1;
}

int main(void){
    char str[128] = "abc";
    char str2[128] = "abc";
    printf("9-4\r\n");
    printf("%s = ",str);
    null_string(str);
    printf("%s\r\n", str);
    printf("9-5\r\n");
    printf("str_char : %d\r\n", str_char(str2,'b'));
    return 0;
}

/*
実行結果

PS C:\Users\yudai\Desktop\school_programming>  gcc c:\Users\yudai\Desktop\school_programming\bp2\20220705_9-4_9-5.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
9-4
abc =
9-5
str_char : 1
*/