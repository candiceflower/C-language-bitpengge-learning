#include <stdio.h>

int main() {
	//判断一个数是否为奇数
	/*int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	if (0 != num % 2) {
		printf("%d是奇数", num);
	}
	else {
		printf("%d不是奇数", num);
	}*/

	//输出1-100之间的奇数
	printf("1-100之间的奇数有：\n");
	for (int a = 0,b=0; a <= 100; a++) {
		if (0 != a % 2) {
			Sleep(10);
			b++;
			printf("%d   ", a);
			if (0 == b % 5) {
				printf("\n");
			}
		}
	}
	return 0;
}