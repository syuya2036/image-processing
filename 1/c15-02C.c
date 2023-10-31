#include <stdio.h>
#include <string.h>

int main(void) {
	char str[10] = "abcDEFghi";
	char str_large[10] = {}, str_small[10] = {}, str_flexible[10] = {};

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str_small[i] = str[i] + 32;
			str_large[i] = str[i];
			str_flexible[i] = str[i] + 32;
		} else {
			str_small[i] = str[i];
			str_large[i] = str[i] - 32;
			str_flexible[i] = str[i] - 32;
		}
	}

	printf("0: %s\n", str);
	printf("1: %s\n", str_large);
	printf("2: %s\n", str_small);
	printf("3: %s\n", str_flexible);
}