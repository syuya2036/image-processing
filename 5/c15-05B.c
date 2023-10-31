// No.05-B
#include <stdio.h>
#include <stdlib.h>

int* intArr(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	int *arr = intArr(n);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	free(arr);

	return 0;
}

// ここに intArr() 関数を書く
int* intArr(int n)
{
	int *arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	return arr;
}

// 実行例
// 5
// 1
// 2
// 3
// 4
// 5
// 1
// 2
// 3
// 4
// 5
