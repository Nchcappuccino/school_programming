#include <stdio.h>

int main(void){
	double a,b,c;
	printf("a:");
	scanf("%lf",&a);
	printf("b:");
	scanf("%lf",&b);
	printf("c:");
	scanf("%lf",&c);
	/*
	(a > b && a > c && b < c) ? printf("最大値は%f,",a) : printf("最小値は%fです。",b);
	(a > b && a > c && b > c) ? printf("最大値は%f,",a) : printf("最小値は%fです。",c);
	(b > a && b > c && a < c) ? printf("最大値は%f,",b) : printf("最小値は%fです。",a);
	(b > a && b > c && a > c) ? printf("最大値は%f,",b) : printf("最小値は%fです。",c);
	(c > a && c > c && a < b) ? printf("最大値は%f,",c) : printf("最小値は%fです。",a);	
	(c > a && c > c && a > b) ? printf("最大値は%f,",c) : printf("最小値は%fです。",b);			
*/
	(a >= b && a >= c && b <= c) ? printf("最大値は%.2f,最小値は%.2fです。",a,b)
	:(a >= b && a >= c && b >= c) ? printf("最大値は%.2f,最小値は%.2fです。",a,c) 
	:(b >= a && b >= c && a <= c) ? printf("最大値は%.2f,最小値は%.2fです。",b,a)
	:(b >= a && b >= c && a >= c) ? printf("最大値は%.2f,最小値は%.2fです。",b,c)
	:(c >= a && c >= b && a <= b) ? printf("最大値は%.2f,最小値は%.2fです。",c,a)
	:printf("最大値は%.2f,最小値は%.2fです。",c,b);
	printf("\n");
	return 0;
}
