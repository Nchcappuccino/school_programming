#include <stdio.h>
int main(void){
	int kuku[9][9];
	int i;
	int j;
	int a;
	int cnt = 0;
	
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
		kuku[i][j] = (i+1) * (j+1);
			if(cnt == j)
				printf("  #%d",j+1);
			else
				printf("%4d",kuku[i][j]);
		}
		cnt++;
		printf("\t[#%d = %4d]\n",cnt,cnt*cnt);
	}
	
	return 0;
}
