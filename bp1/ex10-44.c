#include <stdio.h>

int main(void){
	int serect;
	double r1,r2,r3;/*r3は合成抵抗*/
	printf("1:直列接続の合成抵抗を出力\n2:並列接続の合成抵抗を出力\n");
	printf("選択:");
	scanf("%d",&serect);
	switch(serect){
		case 1:
			printf("抵抗1[ohm]:");
			scanf("%lf",&r1);
			printf("抵抗2[ohm]:");
			scanf("%lf",&r2);
			printf("合成抵抗は%.2f[ohm]です。\n",r1 + r2);
			break;
		case 2:
			printf("抵抗1[ohm]:");
			scanf("%lf",&r1);
			printf("抵抗2[ohm]:");
			scanf("%lf",&r2);
			printf("合成抵抗は%.2f[ohm]です。\n",(r1 * r2) / (r1 + r2));
			break;
		default:
			printf("1か2を入力してください\n");
			break;
	}
	return 0;
}
