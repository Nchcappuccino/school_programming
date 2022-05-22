#include <stdio.h>

int main(void){
	int people,i,j;
	int score[256],rank[256],temp[256];
	
	printf("何人ですか？");
	scanf("%d",&people);
	for(i = 0; i < people; i++){
		printf("No.%d:",i+1);
		scanf("%d",&score[i]);
	}
	
	printf("\nscore rank\n");
	
	for(i = 0; i < people; i++){
		rank[i] = 1;
		for(j = 0; j < people; j++){
			if(score[i] < score[j])
				rank[i]++;
		}
		printf("%5d %4d\n",score[i],rank[i]);
	}
	
	return 0;
	
}
