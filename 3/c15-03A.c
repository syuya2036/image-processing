// No.03-A, No.03-B
#include <stdio.h>
int my_greater(int a, int b);
int my_abs(signed int a);
int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a = %d, b = %d\n", a, b);
	printf("%d is greater.\n", my_greater(a, b));
	printf("my_abs(%d) = %d\n", a, my_abs(a));
	printf("my_abs(%d) = %d\n", b, my_abs(b));
	
	return 0;
}

// この下に、my_greater() や my_abs() 関数を書く
int my_greater(int a, int b) {
	if (a > b) {
		return a;
	};

	return b;
};

int my_abs(signed int a) {
	if (a < 0) {
		return -1 * a;
	};

	return a;
};