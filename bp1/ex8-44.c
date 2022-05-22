#include <stdio.h>

int main(void){
	double x,y,z;
	printf("x:");
	scanf("%lf",&x);
	printf("y:");
	scanf("%lf",&y);
	printf("z:");
	scanf("%lf",&z);
	double date = 1.0 / (1.0/x + 1.0/y + 1.0/z);
	printf("3台のロボットで%3.2f日かかる。\n",date);
	(date <= 4.0) ? printf("よって4日以内に終わる。\n") : printf("よって4日以内に終わらない。\n");
	return 0;
}
