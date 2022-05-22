#include <stdio.h>

int main(void){
	int i,j;
	int sum[4][2] = {{0,0},{0,0},{0,0},{0,0}};
	int tensu1[4][3] = { {91,63,78}, {67,72,46}, {89,34,53}, {32,54,34} };
	int tensu2[4][3] = { {97,67,82}, {73,43,46}, {97,56,21}, {85,46,35} };
	printf("合計 = \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			sum[i][0] += tensu1[i][j];
			sum[i][1] += tensu2[i][j];
		}
		printf("%d %d\n",sum[i][0],sum[i][1]);
	}
	return 0;
}
