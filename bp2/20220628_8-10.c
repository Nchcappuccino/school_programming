#include <stdio.h>

int main(void){
	int i, j, ch;
	int cnt[10] = {0};

	while((ch = getchar()) != EOF){
		if(ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}
	for(i = 0; i < 10; i++){
		printf("%d:", i);
		for(j = 0; j < cnt[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
実行結果

PS C:\Users\yudai\Desktop\school_programming> gcc c:\Users\yudai\Desktop\school_programming\bp2\20220628_8-10.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
0111222344455567778889 
^Z
0:*
1:***
2:***
3:*
4:***
5:***
6:*
7:***
8:***
9:*
*/