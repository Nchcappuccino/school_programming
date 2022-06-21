#include <stdio.h>

int gcd(int x, int y){
	if(x > y && y != 0 && x % y == 0){
		return y;
	}else{
		gcd(y, x % y);
	}
}

int main(void){
	int x, y;
	printf("input x:");
	scanf("%d", &x);
	printf("input y:");
	scanf("%d", &y);
	printf("output = %d\n", gcd(x, y));
	return 0;
}

/*
実行結果
[m20352@a717-pc044 bp2]$ gcc 20220621_8-8.c
[m20352@a717-pc044 bp2]$ ./a.out
input x:22
input y:8
output = 2
[m20352@a717-pc044 bp2]$ gcc 20220621_8-8.c
[m20352@a717-pc044 bp2]$ ./a.out
input x:50
input y:10
output = 10

*/
