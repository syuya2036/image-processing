#include <stdio.h>
#include <string.h>

void print_result(int num) {
	printf("%d: ", num);

	if (num < 0) {
		printf("negative");
	} else if (num > 0) {
		printf("positive");
	} else {
		printf("zero");
	}

	printf(" %s\n", num % 2 == 0 ? "(even)" : "(odd)");
}

int main(void) {
	int a = -19, b = 10;
	for (int i = a; i <= b; i++) {
		print_result(i);
	}
	return 0;
}