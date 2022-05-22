#include <stdio.h>
double L = 44.0f;	//[cm]
double pi = 3.14f;

int main(){
	double S = L * L * pi;
	printf("L = %f[cm]\n\n",L);
	printf("円の面積 = %f[cm^2]\n",S);
	double V = S*2*L/3;
	printf("円錐の体積 = %f[cm^3]\n",V);
	return 0;
}
