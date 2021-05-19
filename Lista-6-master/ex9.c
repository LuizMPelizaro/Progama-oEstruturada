#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i, j, k, a[10], n = -1;
	for(i = 10; i <= 20; i++) {
		n++;
		a[n] = i;
		printf("%d ", a[n]);
	}
	printf("\n");
	for(j = a[j]; j >= 0; j--) {
		if(a[j] % 2 == 0) {
			printf("%d ", a[j]);
		}
	}
	printf("\n");
	for(k = a[k]; k >= 0; k--) {
		if(a[k] % 2 != 0) {
			printf("%d ", a[k]);
		}
	}
}
