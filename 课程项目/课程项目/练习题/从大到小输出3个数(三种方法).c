#include <stdio.h>
#include <string.h>
//从大到小输出三个数，三种方法
int main() {
	int a = 5, b = 7, c = 2;
	scanf("%d%d%d", &a, &b, &c);
	//一、最笨的方法，不推荐
	/*if (a > b) {
		if (a > c) {
			printf("%d,", a);
			if (c > b) {
				printf("%d,%d", c,b);
			}
			else {
				printf("%d,%d", b,c);
			}
		}
		else {
				printf("%d,%d,%d", c,a,b);
		}
	}
	else {
		if (b > c) {
			printf("%d,", b);
			if (a > c) {
				printf("%d,%d", a, c);
			}
			else {
				printf("%d,%d", c, a);
			}
		}
		else {
			printf("%d,%d,%d", c, b, a);
		}
	}*/
	//C语言老师讲的方法，使用选择排序法
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	if (a < c) {
		int t = a;
		a = c;
		c = t;
	}
	if (b < c) {
		int t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d", a, b, c);

	//JS老师讲的方法
	//if (a > b && a > c) {
	//	//a最大
	//	if (b > c) {
	//		printf("%d,%d,%d", a, b, c);
	//	}
	//	else {
	//		printf("%d,%d,%d", a,c,b);
	//	}
	//}
	//else if (b > a && b > c) {
	//	//b最大
	//	if (a > c) {
	//		printf("%d,%d,%d", b, a, c);
	//	}
	//	else {
	//		printf("%d,%d,%d", b, c, a);
	//	}
	//}
	//else {
	//	//c最大
	//	if (b > a) {
	//		printf("%d,%d,%d", c, b, a);
	//	}
	//	else {
	//		printf("%d,%d,%d", c, a, b);
	//	}
	//}
	return 0;
}