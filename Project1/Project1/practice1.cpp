/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int x, y;
	printf("请输入工资为多少元");
	scanf_s("%d", &x);
	if (x <= 30000) 
	{
		y = 0;
		printf("应纳税0元");
	}
	else if (x <= 50000) 
	{
		y = (x - 30000) * 0.03;
		printf("应纳税%d元", y);
	}
	else if (x <= 100000)
	{
		y = 20000 * 0.03 + (x - 50000) * 0.06;
		printf("应纳税%d元", y);
	}
	else if (x > 100000)
	{
		y = 20000 * 0.03 + 50000 * 0.06 + (x - 100000) * 0.1;
		printf("应纳税%d元", y);
	}

	return 0;
}
*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int point,level;
	printf("请输入成绩");
	scanf_s("%d", &point);
	if (point >= 90 && point <= 100) {
		 level = 9;
	}
	else if (point >= 80 && point <= 89) {
		 level = 8;
	}
	else if (point >= 70 && point <= 79) {
		level = 7;
	}
	else if (point >= 60 && point <= 69) {
		level = 6;
	}
	else if (point >= 0 && point <= 59) {
		level = 5;
	}
	switch (level) {
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:
		printf("E");
		break;
	}
	return 0;
}*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n = 0;
	int score = 0;
	int sum = 0;
	int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
	printf("请输入学生人数");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("请输入各个学生成绩");
		scanf_s("%d", &score);
		sum += score;
		if (score >= 90 && score <= 100) {
			countA++;
		}
		if (score >= 80 && score <= 89) {
			countB++;
		}
		if (score >= 70 && score <= 79) {
			countC++;
		}
		if (score >= 60 && score <= 69) {
			countD++;
		}
		if (score > 0 && score <= 59) {
			countE++;
		}
	}
	double average = (double)sum/n;
	printf("学生成绩的平均数为%lf\n", average);
	printf("A级人数=%d,B级人数=%d,C级人数=%d,D级人数=%d,E级人数=%d\n",
		countA, countB, countC, countD, countE);

	return 0;


}
*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
long n, temp;
int power = 1;
printf("输入一个长正整数：");
scanf_s("%ld", &n);
temp = n;
do {
	power *= 10;
	n /= 10;
} while (n / 10 != 0);
n = temp;
printf("%ld从高位开始逐位分离并输出的结果是", temp);
do {
	int digit = n / power;
	printf("%d", digit);
	n %= power;
	power /= 10;
	if (power != 0) {
		printf(",");
	}
} while (power != 0);

printf("\n");
return 0;
}
*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int peach_count = 1;
	for (int i = 9; i >= 1; i--) {
		peach_count = 2 * (peach_count + 1);
	}
	printf("第一天猴子共摘了%d个桃子", peach_count);
	return 0;
}
*/
/*# include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a, b, c, d;
	int i;
	for (i = 1; i <= 10000; i++) {
		int num = i;
		int sum = 0;
		if (i >= 100 && i <= 999) {
			a = num / 100;
			b = num / 10 % 10;
			c = num % 10;
			sum = a * a * a + b * b * b + c * c * c;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
		else if (i >= 1000 && i <= 9999) {
			a = num / 1000;
			b = num / 100 % 10;
			c = num / 10 % 10;
			d = num % 10;
			sum = a * a * a + b * b * b + c * c * c + d * d * d;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
		else if (i >= 1 && i <= 9) {
			if (i * i * i == i) {
				sum = i * i * i;
			if (num == sum) {
				printf("%d", num);
			}
		}
	}
		return 0;
	}
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/*int main()
{
	int a, b, c, d; // 各位数字的变量
	int i;

	printf("1-10000 之间的水仙花数有：\n");

	// 外层循环：遍历 1 到 10000 之间的所有整数
	for (i = 1; i <= 10000; i++) {
		int num = i; // 备份原始数字
		long long sum = 0; // 使用 long long 避免可能的溢出（虽然在这里不至于，但习惯更好）

		// 检查三位数的水仙花数 (100 - 999)
		if (i >= 100 && i <= 999) {
			// 三位数的各位分离
			a = num / 100;      // 百位
			b = num / 10 % 10;  // 十位
			c = num % 10;       // 个位

			// 计算立方和
			sum = a * a * a + b * b * b + c * c * c;
		}

		// 检查四位数的水仙花数 (1000 - 9999)
		else if (i >= 1000 && i <= 9999) {
			// 四位数的各位分离 (注意：这里修正了原代码中的错误)
			a = num / 1000;         // 千位
			b = num / 100 % 10;     // 百位
			c = num / 10 % 10;      // 十位
			d = num % 10;           // 个位

			// 计算立方和 (原代码中缺少此行，已补上)
			sum = a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d;

			// ⚠️ 注意：四位数的水仙花数是四次幂之和等于本身的数，而不是立方和。
			// 修正：水仙花数的定义应是“各位数字的 n 次方之和等于它本身”，
			// n 为该数字的位数。所以四位数为四次幂之和。
		}

		// 检查一位数的特殊情况（1-9 都是一位水仙花数）
		else if (i >= 1 && i <= 9) {
			// 1^3 = 1, 2^3 = 8, 3^3 = 27 ... 
			// 只有 1^1 = 1, 2^1 = 2... 成立。但题目通常指 n 次方。
			// 如果严格按照“立方和”的字面意思，则：
			if (i * i * i == i) { // 只有 1 满足 1^3=1
				sum = i * i * i;
			}
		}

		// 比较：如果各位数字的 n 次方之和等于原数字，则是水仙花数
		if (num == sum) {
			printf("%d\n", num); // 添加换行符，使输出整洁
		}
	}

	return 0;
}
*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b, c, d;
	int i;

	for (i = 1; i <= 10000; i++) {
		int num = i;
		int sum = 0;
		if (i >= 100 && i <= 999) {
			// 三位数：水仙花数
			a = num / 100;
			b = num / 10 % 10;
			c = num % 10;
			sum = a * a * a + b * b * b + c * c * c;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
		else if (i >= 1000 && i <= 9999) {
			a = num / 1000;
			b = num / 100 % 10;
			c = num / 10 % 10;
			d = num % 10;
			sum = a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d;

			if (num == sum) {
				printf("%d\n", num);
			}
		}
	}

	return 0;
}*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
		int* result = (int*)malloc(sizeof(int) * 2);
		int a = 0;
		for (int i = 0; i < numsSize - 1; i++)
		{
			for (int j = i + 1; j < numsSize; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					result[0] = i;
					result[1] = j;
					*returnSize = 2;
					return result;
				}
			}
		}
		return result;
	}
}
*/
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a, b, c, d;
	int i;
	for (i = 1; i <= 10000; i++) {
		int num = i;
		int sum = 0;
		if (i >= 100 && i <= 999) {
			a = num / 100;
			b = num / 10 % 10;
			c = num % 10;
			sum = a * a * a + b * b * b + c * c * c;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
		else if (i >= 1000 && i <= 9999) {
			a = num / 1000;
			b = num / 100 % 10;
			c = num / 10 % 10;
			d = num % 10;
			sum = a * a * a + b * b * b + c * c * c + d * d * d;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
		else if (i >= 1 && i <= 9) {
			sum = i * i * i;
			if (num == sum) {
				printf("%d\n", num);
			}
		}
	}
	return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, guess;
	srand(time(0));
	num = rand() % 100 + 1;
	while (1) {
		printf("请猜一个1到100之间的整数：\n");
		scanf_s("%d", &guess);
		if (guess > num) {
			printf("猜大了\n");
		}
		else if (guess < num) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
		}
	}
	return 0;
}
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 *
 * 这是一个 LeetCode 风格的函数签名，要求返回一个动态分配的数组。
 * returnSize 是一个指向整数的指针，用于设置返回数组的大小（在这里固定为 2）。
 */
#include <corecrt_malloc.h>
/*int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	// 使用两层循环进行暴力枚举
	for (int i = 0; i < numsSize; i++) {
		// 从 i 的下一个元素开始遍历，避免重复和自身相加
		for (int j = i + 1; j < numsSize; j++) {
			// 检查当前两个元素的和是否等于目标值 target
			if (nums[i] + nums[j] == target) {
				// 找到了答案，分配一个大小为 2 的整数数组来存储下标
				int* result = (int*)malloc(2 * sizeof(int));

				// 存储找到的下标
				result[0] = i;
				result[1] = j;

				// 设置返回数组的大小为 2
				*returnSize = 2;

				// 返回结果
				return result;
			}
		}
	}

	// 如果没有找到（根据题目假设一定能找到，但作为健壮的代码，仍需处理）
	*returnSize = 0;
	return NULL;
}

// 示例调用 (在实际 LeetCode 提交中，只需要上面的函数即可)
/*
int main() {
	int nums[] = {2, 7, 11, 15};
	int target = 9;
	int numsSize = 4;
	int returnSize;

	int* result = twoSum(nums, numsSize, target, &returnSize);

	if (result != NULL) {
		printf("输出: [%d, %d]\n", result[0], result[1]);
		free(result); // 记得释放动态分配的内存
	} else {
		printf("未找到答案。\n");
	}

	return 0;
}
*/