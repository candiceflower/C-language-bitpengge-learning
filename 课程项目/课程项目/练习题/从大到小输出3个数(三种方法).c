#include <stdio.h>
#include <string.h>
//�Ӵ�С��������������ַ���
int main() {
	int a = 5, b = 7, c = 2;
	scanf("%d%d%d", &a, &b, &c);
	//һ����ķ��������Ƽ�
	/*if (a > b) {
		if (a > c) {
			printf("%d,", a);
			if (c > b) {
				printf("%d,%d", c,b);
			}
			else {
				printf("%d,%d", b,c);
			}
		}
		else {
				printf("%d,%d,%d", c,a,b);
		}
	}
	else {
		if (b > c) {
			printf("%d,", b);
			if (a > c) {
				printf("%d,%d", a, c);
			}
			else {
				printf("%d,%d", c, a);
			}
		}
		else {
			printf("%d,%d,%d", c, b, a);
		}
	}*/
	//C������ʦ���ķ�����ʹ��ѡ������
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	if (a < c) {
		int t = a;
		a = c;
		c = t;
	}
	if (b < c) {
		int t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d", a, b, c);

	//JS��ʦ���ķ���
	//if (a > b && a > c) {
	//	//a���
	//	if (b > c) {
	//		printf("%d,%d,%d", a, b, c);
	//	}
	//	else {
	//		printf("%d,%d,%d", a,c,b);
	//	}
	//}
	//else if (b > a && b > c) {
	//	//b���
	//	if (a > c) {
	//		printf("%d,%d,%d", b, a, c);
	//	}
	//	else {
	//		printf("%d,%d,%d", b, c, a);
	//	}
	//}
	//else {
	//	//c���
	//	if (b > a) {
	//		printf("%d,%d,%d", c, b, a);
	//	}
	//	else {
	//		printf("%d,%d,%d", c, a, b);
	//	}
	//}
	return 0;
}