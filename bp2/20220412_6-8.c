#include <stdio.h>

int min_of(const int v[], int n) {

	int i;
	int min = v[0];

	for (i = 0; i < n; i++)
		if (min > v[i])
			min = v[i];

	return min;
}

int main() {

	int i;
	int n = 5;
	int array[5] = {-3,6,-9,12,-15};

	for (i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\nreturn: %d\n", min_of(array, n));

	return 0;
}
