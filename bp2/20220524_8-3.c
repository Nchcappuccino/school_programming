#include <stdio.h>
#define SWAP(type, x, y) do {\
	type temp = (x); \
	(x) = (y); \
	(y) = temp; \
} while (0)


int main(void) {
    int x, y;
    printf("please input value x:");
    scanf("%d", &x);
    printf("please input value y:");
    scanf("%d", &y);
	printf("x = %d, y = %d\n", x, y);
	SWAP(int, x, y);
	printf("swapped\n");
	printf("x = %d, y = %d\n", x, y);
    return 0;
}

/* 実行結果

PS C:\Users\yudai\Desktop\school_programming\bp2> gcc .\20220524_8-3.c
PS C:\Users\yudai\Desktop\school_programming\bp2> c:\Users\yudai\Desktop\school_programming\bp2\a.exe
please input value x:5
please input value y:4
x = 5, y = 4
swapped
x = 4, y = 5

*/