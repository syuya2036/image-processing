#include <stdio.h>

int main(void) {
	int n[] = {1980, 1990, 2000, 2010, 2015, 2020, 2300};
	
	for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++) {
		printf("%d: ", n[i]);
		if (n[i] % 4 == 0 && n[i] % 100 != 0 || n[i] % 400 == 0) {
			printf("Leap-Year\n");
		} else {
			printf("\n");
		}
	}
	return 0;
};