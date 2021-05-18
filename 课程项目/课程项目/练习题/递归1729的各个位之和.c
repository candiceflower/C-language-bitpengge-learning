#include <stdio.h>
#include <string.h>

//递归1729的各个位之和
int sum(int num) {
	if (num > 9)
		return sum(num / 10) + num % 10;
	else
		return num;
}


int main() {
	int num = 6666;
	int result = sum(num);
	printf("%d\n", result);
	return 0;
}