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

int main(void){
    int n;
    int x[10];
    printf("要素数を入力(1-10):");
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++){
        printf("No.%d = ", i+1);
        scanf("%d",&x[i]);
    }
    printf("\n最大値はNo.%dの要素です\n",maxno(x,n));
    
    return 0;
} 
