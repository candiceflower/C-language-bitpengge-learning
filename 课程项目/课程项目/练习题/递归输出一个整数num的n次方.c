#include <stdio.h>
#include <string.h>

//递归输出一个整数num的n次方
double sum(int num, int n) {
	if (n < 0)
		return 1.0 / (sum(num, -n));
	else if (n == 0)
		return 1;
	else
		return sum(num, n - 1) * num;
}

//5*
int main() {
	int num = 2;
	double result = sum(num, -3);
	printf("%lf\n", result);
	return 0;
}