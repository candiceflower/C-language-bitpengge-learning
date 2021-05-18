#include <stdio.h>

//��һ������������λ��1�ĸ���
int bit_one(int a) {	//������õķ������м���1��ѭ������
	int count = 0;
	while (a) {
		a = a & (a - 1);
		count++;
	}
	return count;
}

int bit_two(int b) {	//���ַ�����ȱ������Ҫ����32�β��ܳ����
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((b >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

int bit_three(int c) {	//���ַ����׶˼��󣬲��������Ķ�����λ
	int count = 0;
	while (c) {
		if (c % 2 == 1) {
			count++;
		}
		c = c / 2;
	}
	return count;
}

int main() {	//�����Ҫ���ǣ������������ֶ����Ƶ��в�ͬλ�ĸ��������Ի�ʹ����һ��
	int m = 1999;
	int n = 2299;
	int count1 = bit_one(m ^ n);
	int count2 = bit_two(m ^ n);
	int count3 = bit_three(m ^ n);
	printf("%d\n", count1);
	return 0;
}


