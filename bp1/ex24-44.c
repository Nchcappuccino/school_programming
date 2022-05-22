#include <stdio.h>

double calc(double c){
	double f0;
	f0 = 1.0 / (2.0 * 3.14 * 2.45 * 10.0 * 1000.0 * c * 0.000001);
	return f0;
}

int main(void){
	int i;
	double c = 0.001;
	double f0;
	
	printf(" C[uF]\t f0[Hz]\n");
	
	for(i = 0; i < 91; i++){
		f0 = calc(c);
		printf("%.4f\t%8.3f\n",c,f0);
		c += 0.0001;
	}
	
	return 0;
}
