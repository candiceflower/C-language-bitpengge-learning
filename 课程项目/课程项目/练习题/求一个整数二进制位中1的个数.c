#include <stdio.h>

//求一个整数二进制位中1的个数
int bit_one(int a) {	//这是最好的方法，有几个1就循环几次
	int count = 0;
	while (a) {
		a = a & (a - 1);
		count++;
	}
	return count;
}

int bit_two(int b) {	//这种方法的缺点是需要遍历32次才能出结果
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((b >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

int bit_three(int c) {	//这种方法弊端极大，不能求负数的二进制位
	int count = 0;
	while (c) {
		if (c % 2 == 1) {
			count++;
		}
		c = c / 2;
	}
	return count;
}

int main() {	//此题的要求是：查找两个数字二进制的中不同位的个数，所以还使用了一会
	int m = 1999;
	int n = 2299;
	int count1 = bit_one(m ^ n);
	int count2 = bit_two(m ^ n);
	int count3 = bit_three(m ^ n);
	printf("%d\n", count1);
	return 0;
}


