#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void){
	uint32_t data;
	printf("数字を入力してください:");
	scanf("%d", &data);
	printf("符号無し32bitを符号無し16bitにキャストした結果はこちらです:%d\n", (uint16_t)data);
	printf("数学的演算結果%(その符号なし整数型(16bit)で表現できる最大値 + 1)はこちらです:%d\n", (data % 65536));
	return 0;
}

/*
実行結果
[m20352@a717-pc046 bp2]$ gcc 20220517_7-6.c
[m20352@a717-pc046 bp2]$ ./a.out
数字を入力してください:65538
符号無し32bitを符号無し16bitにキャストした結果はこちらです:2
数学的演算結果%(その符号なし整数型(16bit)で表現できる最大値 + 1)はこちらです:2
*/
