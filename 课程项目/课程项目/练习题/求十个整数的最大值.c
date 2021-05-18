#include <stdio.h>
#include <math.h>

//求十个整数的最大值
int main() {
	int num[] = { -111,-2,-3,-4,-5,-99,-7,-8,-19,-10 };
	int index = 1, max = num[0];
	int sz = sizeof(num) / sizeof(num[0]);
	for (; index < sz; index++) {
		if (num[index] > max) {
			max = num[index];
		}
	}
	printf("最大值为：%d\n", max);

	return 0;
}
