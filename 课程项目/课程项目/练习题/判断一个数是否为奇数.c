#include <stdio.h>

int main() {
	//�ж�һ�����Ƿ�Ϊ����
	/*int num = 0;
	printf("������һ��������");
	scanf("%d", &num);
	if (0 != num % 2) {
		printf("%d������", num);
	}
	else {
		printf("%d��������", num);
	}*/

	//���1-100֮�������
	printf("1-100֮��������У�\n");
	for (int a = 0,b=0; a <= 100; a++) {
		if (0 != a % 2) {
			Sleep(10);
			b++;
			printf("%d   ", a);
			if (0 == b % 5) {
				printf("\n");
			}
		}
	}
	return 0;
}