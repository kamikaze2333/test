/*#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int divide(int a, int b, int* result);
int main(void)
{
	int a = 12;
	int b = 0;
	int c;
	if (divide(a, b, &c)) {
		printf("%d/%d=%d\n", a, b, c);
	}
	return 0;
}
int divide(int a, int b, int* result)
{
	int ret = 1;
	if (b == 0) ret = 0;
	else {
		*result = a / b;
	}
	return ret;
}
*/
#include <stdio.h>
#define MAXN 10

int Sum(int List[], int N);

int main()
{
	int List[MAXN], N, i;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &List[i]);
	printf("%d\n", Sum(List, N));
	return 0;
}

/* 你的代码将被嵌在这里 */
int Sum(int List[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += List[i];
	}
	return sum;
}