#include <stdio.h>

//��ӡ100��������3�ı���
int main() {
	int num = 1;
	printf("һ����������3�ı���Ϊ��\n");
	for (; num <= 100; num++) {
		if (num == 53) { printf("\n"); }
		if (num % 3 == 0)
			printf("%d ", num);
	}
	return 0;
}