#include <stdio.h>


int fact(int n) {	//�ݹ麯��
	if (n <= 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {
	//��һ�����Ľ׳�
	/*int num = 0;
	int x, result=1;
	printf("������һ��������");
	scanf("%d", &num);
	for (x = 1; x <= num; x++) {
		result *= x;
	}
	printf("�׳˵Ľ��Ϊ��%d\n", result);*/

	//��ĳ����Χ�ڽ׳˵ĺ�
	int num = 1, x, result = 0, sum = 0;
	int one = 1;
	for (; num <= 10; num++) {
		result *= num;
		sum += result;

	}
	printf("10���ڽ׳˵Ľ��Ϊ��%d\n", sum);

	//�ݹ���һ�����Ľ׳�
	int n = 5;
	int result = fact(n);
	printf("%d\n", result);
}