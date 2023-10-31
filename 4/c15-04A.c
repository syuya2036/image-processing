#include <stdio.h>
void wasa(int *wa, int *sa, int x, int y); // プロトタイプ宣言

int main(void)
{
	int x, y, wa, sa;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("x = %d, y = %d\n", x, y);
	wasa(&wa, &sa, x, y); // 適切な引数の指定をする
	printf("wa = x+y = %d\nsa = x-y = %d\n", wa, sa);
	return 0;
}

void wasa(int *wa, int *sa, int x, int y)
{
	*wa = x + y;
	*sa = x - y;
}

// 実行結果の例
// 10
// 6
// x = 10, y = 6
// wa = x+y = 16
// sa = x-y = 4