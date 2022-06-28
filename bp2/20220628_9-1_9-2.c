#include <stdio.h>

int main(void){
	//9-1
	char str[] = "ABC\0DEF";
	printf("9-1\n");
	printf("str = \"%s\"\n", str);
	//9-2
	//str[]を空文字列にする。
	str[0] = '\0';
	printf("9-2\n");
	printf("str = \"%s\"\n", str);
	return 0;
}

/*
考察
9-1 ABCの後にナル文字が入っており、そのナル文字が文字列の終端と認識されたため、ABCしか出力が行われなかったと考えられる。
9-2 文字列の先頭の要素にナル文字が入っており、先頭に入っているナル文字が文字列の終端と認識されたため、空文字列となったと考えられる。

実行結果
PS C:\Users\yudai\Desktop\school_programming> gcc C:\Users\yudai\Desktop\school_programming\bp2\20220628_9-1_9-2.c
PS C:\Users\yudai\Desktop\school_programming> c:\Users\yudai\Desktop\school_programming\a.exe
9-1
str = "ABC"
9-2
str = ""

*/