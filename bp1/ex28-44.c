#include <stdio.h>


int maxno(int x[], int n){
	int temp = 0;
   int i;
	for(i = 0; i < n; i++){
		if(x[temp] < x[i])
			temp = i;
	}
	return temp+1;
}

double avevec(int x[], int n){
	int i;
	double val = 0.0;
	for(i = 0; i < n; i++)
		val += x[i];
	val /= n;
	return val;
}

void graphvec_1(int x[], int n, int max_num){
	int i;
	int j;
	int letter_len;
	for(i = 0; i  < n; i ++){
		printf("No.%2d ",i+1);
		letter_len = x[i];
		for(j = 0; j < letter_len; j++){
			if(max_num - 1 == i)
				printf("#");
			else
				printf("*");
		}
		printf("\n");
	}
}

void graphvec_2(int x[], int n, int max_num){
	int i;
	int j;
	int letter_len[10];
	int max_size = x[max_num - 1];
	for(i = 0; i < n; i++){
		letter_len[i] = max_size - x[i];
	}
	
	for(i = 0; i < max_size; i++){
		for(j = 0; j < n; j++){
			letter_len[j]--;
			if(letter_len[j] >= 0)
				printf(" ");
			if(letter_len[j] < 0){
				if(max_num - 1 == j)
					printf("#");
				else
					printf("*");
			}
			printf(" ");
		}
		printf("\n");

	}
	
	for(i = 0; i < n; i++)
		printf("N ");
	printf("\n");

	
	for(i = 0; i < n; i++)
		printf("O ");
	printf("\n");

	for(i = 0; i < n; i++)
		printf(". ");
	printf("\n");

	
	for(i = 0; i < n; i++){
		if(i == 9)
			printf("1\n                  0");
		else
			printf("%d ", i+1);
	}
	printf("\n");

}

int main(void){
    int n;
    int x[10];
    printf("要素数Nを入力(1-10):");
    scanf("%d", &n);
     printf("\n");
    int i;
    for(i = 0; i < n; i++){
        printf("No.%2d = ", i+1);
        scanf("%d",&x[i]);
     }
     printf("\n");
    int max = maxno(x,n);
    graphvec_1(x,n,max);
     printf("\n");
    printf("最大値はNo.%2dの要素で、平均値は%.2fです\n\n",max, avevec(x,n));
    graphvec_2(x,n,max);
    
	return 0;
} 

