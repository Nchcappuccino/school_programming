#include <stdio.h>

double area(double L){
	double s = L * L * 3.14;
	return s;
}

int main(void){
	printf("半径[cm] = ");
	double L;
	scanf("%lf",&L);
	printf("面積 = %.2f[cm^2]\n",area(L));
	return 0;
}
