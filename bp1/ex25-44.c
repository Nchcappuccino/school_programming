#include <stdio.h>

int function_y(int a, int b){
	int sigma1 = 1;
	int sigma2 = 1;
	int x;
	int y;
	int i,j;
	for(i = b; i > 0; i--){
		x = 1;
		for(j = i; j > 0; j--)
			x *= a;
		sigma1 += x;
	}
	for(i = a; i > 0; i--){
		x = 1;
		for(j = i; j > 0; j--)
			x *= b;
		sigma2 += x;
	}
	
	y = sigma1 + sigma2;
	return y;
}


int main(void){
	int a,b;
	printf("aの値を入力:");
	scanf("%d",&a);
	printf("bの値を入力:");
	scanf("%d",&b);
	printf("\nyの値は,%dです。\n",function_y(a,b));
	return 0;
}
