#include <stdio.h>

int main(void){
	int tensu[2][4][3] = {{{91,63,78},{67,72,46},{89,34,53},{32,54,34}}, {{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
	int sum[4][3];
	int i,j,k;
	printf("1回目の点数\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%4d",tensu[0][i][j]);
		}
		printf("\n");
	}
	printf("2回目の点数\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%4d",tensu[1][i][j]);
		}
		printf("\n");
	}
	printf("合計点\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
			printf("%4d", sum[i][j]); 
		}
		printf("\n");
	}
	return 0;
}
