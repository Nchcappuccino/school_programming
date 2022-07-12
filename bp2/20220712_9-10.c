#include <stdio.h>

void del_digit(char s[]){
    int i = 0;
    char temp[128];
    for(int i = 0; i < 128+1; i++){
        temp[i] = '\0';
    }
    int size = 0;
    int temp_size = 0;
    while(s[size])
        size++;
    for(i = 0; i < size; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            //何もしない
        }else{
            temp[temp_size] = s[i];
            temp_size++;
        }
    }
    for(i = 0; i <= temp_size; i++){
        s[i] = temp[i];
    }
    s[temp_size] = '\0';
}

int main(void){
    char str[128];
    printf("please input string:");
    scanf("%s", str);
    printf("before:%s\n", str);
    del_digit(str);
    printf("after:%s\n", str);
    return 0;
}

/*
実行結果

PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220712_9-10.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
please input string:AB1C9
before:AB1C9
after:ABC
*/