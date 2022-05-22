#include <stdio.h>

int main(void){
	int num;
	printf("数値を入力してください:");
	scanf("%d",&num);
	printf("\n");
	int i = 0;
	int j = 0;
	for(i = 1; i <= num; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i = 1; i <= num; i++){
		for(j = 1; j <= num+i; j++){
			printf(" ");
		}
		for(j = 1; j <= num - i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
