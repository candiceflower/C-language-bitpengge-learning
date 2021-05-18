#include <stdio.h>

void method_one(int a, int b) {		//方法一：利用数字的加减法，缺点：无法应对溢出的情况
	a = a + b;
	b = a - b;
	a = a - b;
	printf("one = %d,two = %d\n", a, b);
}

void method_two(int a, int b) {		//方法二：利用位运算异或，推荐使用此方法
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("one = %d,two = %d\n", a, b);
}


int main() {
	int one = 0;
	int two = 0;
	printf("请输入两个值：");
	scanf("%d%d", &one, &two);
	method_two(one, two);	//方法二
	return 0;
}