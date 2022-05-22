#include <stdio.h>

int main(){
	//R4はR1とR2の合成抵抗
	double v1,v2,v3,r1,r2,r3,r4,e1,i1,i2,i3;
	
	printf("R1[ohm]= ");
	scanf("%lf",&r1);
	printf("R2[ohm]= ");
	scanf("%lf",&r2);
	printf("R3[ohm]= ");
	scanf("%lf",&r3);
	printf("E1[V]= ");
	scanf("%lf",&e1);
	printf("\n");
	
	//R1とR2の合成抵抗を求める	
	r4 = (r1 * r2) / (r1 + r2);
	//I3を求める
	v3 = r3 / (r3 + r4) * e1;
	i3 = v3 / r3;
	//電圧を求める
	v1 = e1 - v3;
	v2 = v1;
	//I1とI2を求める
	i1 = v1 / r1;
	i2 = v2 / r2;
	
	printf("i1 = %.3f [A],",i1);
	printf("i2 = %.3f [A],",i2);
	printf("i3 = %.3f [A]\n",i3);
	return 0;
}

