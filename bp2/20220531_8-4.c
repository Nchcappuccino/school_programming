#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n) {
	int i, j;
	
	for (i = n; i > 1; i--)
		for (j = 1; j < i; j++)
			if (a[j - 1] > a[j]) {
				
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
}

int main(void) {
	
	int i;
	int height[NUMBER];
	
	printf("%d人の身長を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		
		printf("%2d番: ", i + 1);
		scanf("%d", &height[i]);
	}
	
	bsort(height, NUMBER);
	
	printf("昇順にソートしました。\n");
	for (i = 0; i < NUMBER; i++)
		printf("%2d番: %d\n", i + 1, height[i]);
	
	return 0;
}

/*
実行結果
PS C:\Users\yudai\Desktop\school_programming\bp2> c:\Users\yudai\Desktop\school_programming\bp2\a.exe
5人の身長を入力してください。
 1番: 179
 2番: 163
 3番: 175
 4番: 178
 5番: 173
昇順にソートしました。
 1番: 163
 2番: 173
 3番: 175
 4番: 178
 5番: 179
*/