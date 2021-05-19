#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, l, n, A[10], B[10];
	n = -1;
	for(i = 2; i <= 20; i++) {
		if(i % 2 == 0) {
			n++;
			A[n] = i;
			printf("%i ", A[n]);
		}
	}
	printf("\n");
	n= -1;
	for(j = 10; j <= 19; j++) {
		n++;
		B[n] = j;
		printf("%i ", B[n]);
	}
	printf("\n\n");
	for(k = 0; k < A[k]; k++) {
		printf("%i + %i = %i \n", A[k], B[k],A[k] + B[k]);
	}
	return 0;
}
