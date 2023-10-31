#include <stdio.h>
void my_swap(int *a, int *b); // プロトタイプ宣言(???を埋める)

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a=%d, b=%d\n", a, b); // 入れ替え前
	my_swap(&a, &b); // ???に適切な指定をして呼び出す
	printf("a=%d, b=%d\n", a, b); // 入れ替え後
	return 0;
}

void my_swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// 実行結果の例
// 10
// 6
// a=10, b=6
// a=6, b=10