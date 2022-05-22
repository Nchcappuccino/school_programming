#include <stdio.h>

int main() {
	int n;
	printf("sizeof 1 => %d\n", (unsigned)sizeof 1);
	printf("sizeof+1 => %d\n", (unsigned)sizeof+1);
	printf("sizeof-1 => %d\n", (unsigned)sizeof-1);
	printf("sizeof(unsigned)-1 => %d\n", (unsigned)sizeof(unsigned)-1);
	printf("sizeof(double)-1 => %d\n", (unsigned)sizeof(double)-1);
	printf("sizeof((double)-1) => %d\n", (unsigned)sizeof((double)-1));
	printf("sizeof n+2 => %d\n", (unsigned)sizeof n+2);
	printf("sizeof(n+2) => %dv", (unsigned)sizeof(n+2));
	printf("sizeof(n+2.0) => %d\n", (unsigned)sizeof(n+2.0));
	return 0;
}
