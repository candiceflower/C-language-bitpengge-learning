#include <stdio.h>
#include <math.h>

//������̨��
//������쳲���������
//̨�ף�1	2	3	4	5	 6	 7	...	
//������1	2	3	5	8	13	21	...
int steps(int n) {
	if (n <= 1)
		return 1;
	else
		return steps(n - 1) + steps(n - 2);
}

int main() {
	int n, num;
	printf("��ѡ��̨������");
	scanf("%d", &n);
	num = steps(n);
	printf("%d", num);
	return 0;
}
