#include <stdio.h>

int main(void){
	int num,data,i;
	int max = 0;
	int sum = 0;
	double avg = 0.0;
	printf("何人?:");
	scanf("%d",&num);

	for(i = 1; i <= num; i++){
		printf("NO.%d:",i);
		scanf("%d",&data);
		if(data > max)	max = data;
		sum += data;
	}
	
	avg = (double)sum / (double)num;
	printf("最高点は%d点です。\n合計点は%d点, 平均点は%4.2f点です。\n",max,sum,avg);
	return 0;
}
