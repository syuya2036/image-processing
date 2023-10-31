// No.05-A
#include <stdio.h>
#define N 100
typedef struct
{
	int id;
	char name[20];
	int kokugo;
	int sansu;
	int rika;
} SEISEKI;

int main(void)
{
	SEISEKI students[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &students[i].id);
		if (students[i].id < 0) // 入力の終了条件
			break;
		scanf("%20s", students[i].name);
		scanf("%d", &students[i].kokugo);
		scanf("%d", &students[i].sansu);
		scanf("%d", &students[i].rika);
	}
	int n = 0;
	int kokugo = 0;
	int sansu = 0;
	int rika = 0;

	for (int i = 0; students[i].id >= 0 && i < N; i++)
	{ // 出力の終了条件(2条件のANDとして設定)
		printf("%d: %s %d\n", students[i].id, students[i].name, (students[i].kokugo + students[i].sansu + students[i].rika) / 3);
		n++;
		kokugo += students[i].kokugo;
		sansu += students[i].sansu;
		rika += students[i].rika;
	}
	printf("kokugo = %d\n", kokugo / n);
	printf("sansu = %d\n", sansu / n);
	printf("rika = %d\n", rika / n);
	return 0;
}
