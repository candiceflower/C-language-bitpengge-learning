#include <stdio.h>
#include <math.h>

//青蛙跳台阶
//类似与斐波那契数列
//台阶：1	2	3	4	5	 6	 7	...	
//跳法：1	2	3	5	8	13	21	...
int steps(int n) {
	if (n <= 1)
		return 1;
	else
		return steps(n - 1) + steps(n - 2);
}

int main() {
	int n, num;
	printf("请选择台阶数：");
	scanf("%d", &n);
	num = steps(n);
	printf("%d", num);
	return 0;
}
