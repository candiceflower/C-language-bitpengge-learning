#include <stdio.h>

//��ӡ�����������Լ��
int main() {
	int a = 99, b = 20;
	//����ѭ���ķ�����Ч�ʵ�
	/*int x;
	for (x=a; x > 0; x--) {
		if (a % x == 0 && b % x == 0) {
			printf("%d��%d�����Լ����%d", a,b,x);
			break;
		}
	}*/

	//շת�����
	//����˵�����ǰ�ԭ������תΪ������ԭ����תΪ������
	printf("%d��%d�����Լ����", a, b);
	for (int t; t = a % b; b = t, a = b) { ; }
	printf("%d", b);
	return 0;
}