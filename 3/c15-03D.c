#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int count = 0;
	double x, y;
	scanf("%d", &n);
	printf("n=%d\n", n);

	for (int i = 0; i < n; i++) {
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		if (x*x + y*y < 1) {
			count++;
		}
	}
	
	printf("PI=%f¥n", 4.0 * ((double)count / (double)n));
	return 0;
}