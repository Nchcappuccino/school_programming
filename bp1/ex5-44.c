#include <stdio.h>
double r;		//[ohm]
double d;		//直径[mm]
double l;		//[m]
double pi = 3.14;
double resistivity = 1.68*0.00000001;		//電気抵抗率[ohm m]
int main(void){
	printf("直径Dを入力してください[mm]:");
	scanf("%lf",&d);
	printf("長さLを入力してください[m]:");
	scanf("%lf",&l);
	r = resistivity * l / ((d/2)*(d/2)*pi*0.000001);
	printf("抵抗値は%.4f[ohm]です。\n",r);
	return 0; 
}
