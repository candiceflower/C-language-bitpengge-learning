#include <stdio.h>


int fact(int n) {	//递归函数
	if (n <= 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {
	//求一个数的阶乘
	/*int num = 0;
	int x, result=1;
	printf("请输入一个整数：");
	scanf("%d", &num);
	for (x = 1; x <= num; x++) {
		result *= x;
	}
	printf("阶乘的结果为：%d\n", result);*/

	//求某个范围内阶乘的和
	int num = 1, x, result = 0, sum = 0;
	int one = 1;
	for (; num <= 10; num++) {
		result *= num;
		sum += result;

	}
	printf("10以内阶乘的结果为：%d\n", sum);

	//递归求一个数的阶乘
	int n = 5;
	int result = fact(n);
	printf("%d\n", result);
}