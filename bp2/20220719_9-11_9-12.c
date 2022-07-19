#include <stdio.h>

#define CS_SIZE 128
#define STR_NUM 100

void put_strary2(const char s[][CS_SIZE], int n){
    int i;
    for(i = 0; i < n; i++){
        int j = 0;
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$'){
            return;
        }     
        printf("s[%d] = \"", i);
        while(s[i][j]){       
            putchar(s[i][j++]);
        }
        puts("\"");
    }
}

void rev_strings(char s[][CS_SIZE], int n){
    char temp[CS_SIZE];
    int i = 0, j = 0, k = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < CS_SIZE+1; j++)
            temp[j] = '\0';
        j = 0;
        int size = 0;
        while(s[i][j])
            j++;
        size = j;
        for(k = 0; k < size; k++){
            temp[k] = s[i][size - k - 1];
        }
        j = 0;
        while(temp[j]){
            s[i][j] = temp[j];
            j++;
        }
    }
}

int main(void){
    printf("9-11\n");
    char cs[][CS_SIZE] = {"Turbo", "NA", "DOHC", "$$$$"};
    put_strary2(cs, STR_NUM);
    printf("9-12\n");
    char s[][CS_SIZE] = {"SEC", "ABC"};
    printf("before rev_strings:\n");
    int i = 0;
    for(i = 0; i < 2; i++){
        printf("%s\n", s[i]);
    }
    rev_strings(s, 2);
    printf("after rev_strings:\n");
    for(i = 0; i < 2; i++){
        printf("%s\n", s[i]);
    }
    
    return 0;
}

/*
実行結果

PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220719_9-11_9-12.c -std=c90
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
9-11
s[0] = "Turbo"
s[1] = "NA"
s[2] = "DOHC"
9-12
before rev_strings:
SEC
ABC
after rev_strings:
CES
CBA

*/