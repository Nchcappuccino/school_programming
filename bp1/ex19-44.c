#include <stdio.h>

int main(void){
	int i,j;
	FILE *fp;
   fp = fopen("kuku.csv","w");
	
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
			fprintf(fp,"%d",(i+1) * (j+1));
			printf("%3d",(i+1) * (j+1));
			if(j != 8){
				fprintf(fp,",");
				printf(",");
			}
		}
		fprintf(fp, "\n");
		printf("\n");
	}
	 fclose(fp);
    return 0;
	
}

