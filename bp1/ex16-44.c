#include <stdio.h>

int main(void){
	int input;
	int array[10];
	int i;
	int j;
	int a;
	printf("0以上1024未満の整数を入力");
	scanf("%d",&input);
	if (input < 0 || input > 1023){
		printf("入力した数字は範囲外です\n");
		return 0;
	}
	for(i = 0; i < 10; i++){
		a = input;
		for(j = 0; j < i; j++){
			a /= 2;
		}
		array[i] = a%2;

	}
	for (i = 9; i > -1; i--)
		printf("bin[%d]= %d\n",i,array[i]);
	return 0;
}
