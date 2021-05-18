#include <stdio.h>

//打印两个数的最大公约数
int main() {
	int a = 99, b = 20;
	//依次循环的方法，效率低
	/*int x;
	for (x=a; x > 0; x--) {
		if (a % x == 0 && b % x == 0) {
			printf("%d和%d的最大公约数是%d", a,b,x);
			break;
		}
	}*/

	//辗转相除法
	//简单来说，就是把原被除数转为除数，原余数转为被除数
	printf("%d和%d的最大公约数是", a, b);
	for (int t; t = a % b; b = t, a = b) { ; }
	printf("%d", b);
	return 0;
}