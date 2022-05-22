#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES 

int main(void){
	double data;
	printf("面積を入力してください:");
	scanf("%lf", &data);
	double a = sqrt(data);
	printf("1辺の長さは%fです\n", a);
	return 0;
}

/*
実行結果
[m20352@a717-pc046 bp2]$ ./a.out
面積を入力してください:16
1辺の長さは4.000000です

*/
