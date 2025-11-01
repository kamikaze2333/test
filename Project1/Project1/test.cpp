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
int main()
{
	int left = 0;
	int right = strlen (arr1) - 1;
	char arr1[] = { 1 1 1 1 1 1};
	char arr2[] = { * * * * * *};
	while (left <= right) {
		arr1[left] = arr2[left];
		arr2[right] = arr2[right];
		left++;
		right--;
	}
	printf("%d", arr1[]);
	return 0;
}