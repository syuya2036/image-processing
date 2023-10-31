#include <stdio.h>
#include <string.h>

int main(void) {
	for (int i = 1; i <= 12; i++) {
		switch (i) {
			case 1:
				printf("%d: Jan\n", i);
				break;
			case 2:
				printf("%d: Feb\n", i);
				break;
			case 3:
				printf("%d: Mar\n", i);
				break;
			case 4:
				printf("%d: Apr\n", i);
				break;
			case 5:
				printf("%d: May\n", i);
				break;
			case 6:
				printf("%d: Jun\n", i);
				break;
			case 7:
				printf("%d: Jul\n", i);
				break;
			case 8:
				printf("%d: Aug\n", i);
				break;
			case 9:
				printf("%d: Sep\n", i);
				break;
			case 10:
				printf("%d: Oct\n", i);
				break;
			case 11:
				printf("%d: Nov\n", i);
				break;
			case 12:
				printf("%d: Dec\n", i);
				break;
		}
	}
	return 0;
}