#include<stdio.h>

int calc(int n)
{
    int pw = 1;
    while(n--){
        pw *= 2;
    }
    return(pw);
}

int main(void)
{
    int a, n;
    int b, c, d, e;

    printf("整数を入力:"); scanf("%d",&a);
    printf("シフトしたい数を入力:"); scanf("%d",&n);

    b = a * calc(n);
    c = a / calc(n);

    d = a << n;
    e = a >> n;

    printf("%d × (2の%d乗) = %d\n", a, n, b);
    printf("%d << %d = %d\n", a, n, d);
    printf("%d ÷ (2の%d乗) = %d\n", a, n, c);
    printf("%d >> %d = %d\n", a, n, e);

    return 0;
}

////////////////////////////////////////////////
/*
実行結果
整数を入力:100
シフトしたい数を入力:2
100 × (2の2乗) = 400
100 << 2 = 400
100 ÷ (2の2乗) = 25
100 >> 2 = 25
*/
