#include <stdio.h>
#include <math.h>

//����1/1 - 1/2 + 1/3 - 1/4 ... -1/100�Ľ��
int main() {
	//���˷�������ȡ������ӣ�ż�����
	/*int a = 1;
	float sum = 0;
	for (; a <= 100; a++) {
		if (a % 2 != 0) {
			sum += 1.0 / a;
		}
		else {
			sum -= 1.0 / a;
		}
	}*/

	//��ʦ����  ����һ����ֵ�����ϸ���ֵȡ���ͺ���
	int a = 1;
	float sum = 0;
	int flag = 1;
	for (; a <= 100; a++) {
		sum += flag * (1.0 / a);
		flag = -flag;
	}
	printf("%f", sum);
	return 0;
}
