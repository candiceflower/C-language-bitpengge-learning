#include <stdio.h>

//打印1000-2000年之间的闰年
int main() {
	int year = 1000;
	printf("1000-2000年之间的闰年有：\n");
	for (; year <= 2000; year++) {
		/*if (year % 4 == 0 && year % 100 != 0) {
			printf("%d\n", year);
		}
		else if (year % 400 == 0) {
			printf("%d\n", year);
		}*/

		//极致简洁
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			printf("%d\n", year);
	}
	return 0;
}