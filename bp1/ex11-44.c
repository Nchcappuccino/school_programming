#include <stdio.h>

int main(void){
	int month,date;
	printf("何月(7 or 8):");
	scanf("%d",&month);
	switch(month == 7 || month == 8){
		case 0:	printf("範囲外です\n");	return 0;
	}
	printf("何日(1 ~ 31):");
	scanf("%d",&date);
	switch(date < 1 || date > 31){
		case 1:	printf("範囲外です\n");		return 0;
	}
	printf("%d月%d日は",month,date);
	switch(month){
		case 7:	date+=4;
		case 8:
			switch(date % 7){
				case 0:	printf("土曜日です");	break;
				case 1:	printf("日曜日です");	break;
				case 2:	printf("月曜日です");	break;
				case 3:	printf("火曜日です");	break;
				case 4:	printf("水曜日です");	break;
				case 5:	printf("木曜日です");	break;
				case 6:	printf("金曜日です");	break;
			}				
	}
	printf("\n");
	return 0;
}

