#include <stdio.h>

int main(){
	int year;	/*西暦*/
	int gengou;	/*元号*/

	printf("西暦:");
	scanf("%d",&year);
	if(year > 2021 || year < 1868){
		printf("error\n");
		return 0;
	}

	if (year - 2019 >= 0){
		printf("%d年はレイワ%d年です。\n",year, year - 2018);
		return 0;
	}
	if(year - 1989 >= 0){
		printf("%d年は平成%d年です。\n",year,year - 1988);
		return 0;
	}
	if(year - 1926 >= 0){
		printf("%d年は昭和%d年です。\n",year,year - 1925);
		return 0;
	}
	if(year - 1912 >= 0){
		printf("%d年は大正%d年です。\n",year,year - 1911);
		return 0;
	}else{
		/*明治*/
		printf("%d年は明治%d年です。\n",year,year - 1867);
		return 0;
	}
	
	
	
	/*
	printf("西暦:");
	scanf("%d",&year);
	if(year > 2021 || year < 1868){
		printf("error\n");
		return 0;
	}
	if (year - 2019 >= 0)
		printf("%d年はレイワ%d年です。\n",year, year - 2018);
	else if(year - 1989 >= 0)
		printf("%d年は平成%d年です。\n",year,year - 1988);
	else if(year - 1926 >= 0)
		printf("%d年は昭和%d年です。\n",year,year - 1925);
	else if(year - 1912 >= 0)
		printf("%d年は大正%d年です。\n",year,year - 1911);
	else
		printf("%d年は明治%d年です。\n",year,year - 1967);
	return 0;
		*/
		

}
