#include <stdio.h>

void method_one(int a, int b) {		//����һ���������ֵļӼ�����ȱ�㣺�޷�Ӧ����������
	a = a + b;
	b = a - b;
	a = a - b;
	printf("one = %d,two = %d\n", a, b);
}

void method_two(int a, int b) {		//������������λ��������Ƽ�ʹ�ô˷���
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("one = %d,two = %d\n", a, b);
}


int main() {
	int one = 0;
	int two = 0;
	printf("����������ֵ��");
	scanf("%d%d", &one, &two);
	method_two(one, two);	//������
	return 0;
}