#include <stdio.h>

int main(){
	double x;		/*入力[%]*/
	double a;		/*追加する水[ml]*/
	double default_salt = 40.0;
	double default_water = 60.0; 
	double default_salt_water = 100.0;
	printf("濃度[%]を入力してください:");
	scanf("%lf",&x);
	if(x < 1.0 || x > 40.0){
		printf("error\n");
		return 0;
	}
	a = (default_salt * 100 / x) - default_salt_water;
	
	/*aは追加する水の量であってもともと100mlがあるので+default_salt_waterする*/
	if(a + default_salt_water > 1000.0)
		printf("水を%5.2f[ml]追加するとコップから水があふれます\n",a);
	else
		printf("追加する水は、%5.2f[ml]です。\n食塩水は、%5.2f[ml]になります\n",a,a + default_salt_water);
	return 0;
}
