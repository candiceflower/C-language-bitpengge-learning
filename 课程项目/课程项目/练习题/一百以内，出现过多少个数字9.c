#include <stdio.h>
#include <math.h>

//һ�����ڣ����ֹ����ٸ�����9
int main() {
	int num = 1, count = 0;
	for (; num <= 100; num++) {
		if (num % 10 == 9) {
			count++;
		}
		if (num / 10 == 9) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
