#include <stdio.h>

int combination(int n, int r){
	if(r == 0 || n == r){
		return 1;
	}else if(r == 1){
		return n;
	}else{
		return combination(n-1, r-1) + combination(n-1, r);
	}
}

int main(void){
	int n, r;
	printf("input n:");
	scanf("%d", &n);
	printf("input r:");
	scanf("%d", &r);
	printf("combination: %d\n", combination(n, r));
	return 0;
}

/*
実行結果
[m20352@a717-pc044 bp2]$ ./a.out
input n:4
input r:2
combination: 6
*/
