#include <stdio.h>

#define NUM 10

int i,j,tmp;
int x[NUM] = {9,4,6,2,1,8,0,3,7,5};


void sort(void){
	for(i = 0; i < NUM; i++){
		for(j = 0; j < NUM; j++){
			if(x[i] < x[j]){
				tmp = x[j];
				x[j] = x[i];
				x[i] = tmp;
			}
		}
	}
}

void print_for(void){
	for(i = 0; i < NUM; i++)
		printf("%d ",x[i]);
}

int main(void){
	printf("ソート前:\n");
	print_for();
	sort();
	printf("\nソート後:\n");
	print_for();
	printf("\n");
	return 0;
}
