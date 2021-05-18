#include <stdio.h>

//获取一个整数二进制位的偶数位和奇数位，分别打印出来
void bit(int n) {
	printf("原数字：%d\n", n);
	int i;
	printf("奇数位：");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
	printf("偶数位：");
	for (i = 31; i >= 1; i -= 2) {
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
}
//00000101
int main() {
	int n = 0;
	printf("请输入原数字：");
	scanf("%d", &n);
	bit(n);
	return 0;
}



