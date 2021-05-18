#include <stdio.h>
#include <math.h>

//计算1/1 - 1/2 + 1/3 - 1/4 ... -1/100的结果
int main() {
	//个人方法，采取奇数相加，偶数相减
	/*int a = 1;
	float sum = 0;
	for (; a <= 100; a++) {
		if (a % 2 != 0) {
			sum += 1.0 / a;
		}
		else {
			sum -= 1.0 / a;
		}
	}*/

	//老师方法  定义一个新值，不断给新值取反就好了
	int a = 1;
	float sum = 0;
	int flag = 1;
	for (; a <= 100; a++) {
		sum += flag * (1.0 / a);
		flag = -flag;
	}
	printf("%f", sum);
	return 0;
}
