#include <stdio.h>

//��ȡһ������������λ��ż��λ������λ���ֱ��ӡ����
void bit(int n) {
	printf("ԭ���֣�%d\n", n);
	int i;
	printf("����λ��");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2) {
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
}
//00000101
int main() {
	int n = 0;
	printf("������ԭ���֣�");
	scanf("%d", &n);
	bit(n);
	return 0;
}



