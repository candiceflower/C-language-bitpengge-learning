#include <stdio.h>
//쳲����������㷨(�ݹ�and����)
int Fib(int n) {

	if (n <= 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}

double series(int n) {
	double fib1 = 1, fib2 = 1, fib3 = 1;
	//int count = 2;

	for (; n > 2; n--) {
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	return fib3;
}

int main() {
	int n, fib;
	double result;
	printf("��������ڼ�λ��:");
	scanf("%d", &n);
	result = series(n);
	fib = Fib(n);
	printf("�����㷨��%.0lf\n", result);
	printf("�ݹ��㷨��%d\n", fib);

	return 0;
}