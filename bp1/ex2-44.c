#include <stdio.h>
int a;
int b;
int main(void){
	a = 4;
	b = 9;
	printf("a=%d\nb=%d\n\n",a,b);
	printf("和=%d, ",a+b);
	printf("差=%d, ",a-b);
	printf("積=%d, ",a*b);
	double c = (double)a / b;
	printf("商=%f\n",c);
	return 0;
}
