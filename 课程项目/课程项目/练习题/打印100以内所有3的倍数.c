#include <stdio.h>

//打印100以内所有3的倍数
int main() {
	int num = 1;
	printf("一百以内所有3的倍数为：\n");
	for (; num <= 100; num++) {
		if (num == 53) { printf("\n"); }
		if (num % 3 == 0)
			printf("%d ", num);
	}
	return 0;
}