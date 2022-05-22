#include <stdio.h>

int main(void){
	float float_data;
	double double_data;
	long double long_double_data;
	printf("7-7の課題\n");
	printf("float型の数字を入力:");
	scanf("%f", &float_data);
	printf("double型の数字を入力:");
	scanf("%lf", &double_data);
	printf("long double型の数字を入力:");
	scanf("%Lf", &long_double_data);
	printf("float:%f\ndouble:%f\nlong double:%Lf\n", float_data, double_data, long_double_data);
	printf("7-8の課題\n");
	printf("sizeof(float):%d\n", sizeof(float));
	printf("sizeof(double):%d\n", sizeof(double));
	printf("sizeof(long double):%d\n", sizeof(long double));
	return 0;
}

/*
//実行結果
[m20352@a717-pc046 bp2]$ gcc 20220517_7-7_7-8.c 
[m20352@a717-pc046 bp2]$ ./a.out
7-7の課題
float型の数字を入力:1.0
double型の数字を入力:2.0
long double型の数字を入力:3.0
float:1.000000
double:2.000000
long double:3.000000
7-8の課題
sizeof(float):4
sizeof(double):8
sizeof(long double):16

*/
