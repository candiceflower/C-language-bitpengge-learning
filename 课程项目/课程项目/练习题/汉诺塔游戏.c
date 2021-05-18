#include <stdio.h>
#include <math.h>

//��ŵ����Ϸ
int hanoi(int n, char a, char b, char c) {
	if (n == 1)
		printf("%c --> %c\n", a, c);
	else {
		hanoi(n - 1, a, c, b);
		printf("%c --> %c\n", a, c);
		hanoi(n - 1, b, a, c);
	}
	return pow(2, n) - 1;
}

int main() {
	int n, num;
	printf("��ѡ�������");
	scanf("%d", &n);
	num = hanoi(n, 'A', 'B', 'C');
	printf("��Ҫ�ƶ��Ĵ���Ϊ%d��\n", num);
	return 0;
}