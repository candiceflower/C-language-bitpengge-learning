#include <stdio.h>

//��ӡ1000-2000��֮�������
int main() {
	int year = 1000;
	printf("1000-2000��֮��������У�\n");
	for (; year <= 2000; year++) {
		/*if (year % 4 == 0 && year % 100 != 0) {
			printf("%d\n", year);
		}
		else if (year % 400 == 0) {
			printf("%d\n", year);
		}*/

		//���¼��
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			printf("%d\n", year);
	}
	return 0;
}