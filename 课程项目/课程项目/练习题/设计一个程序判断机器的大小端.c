#include <stdio.h>

//���һ�������жϻ����Ĵ�С��
int check_sys(void) {
	int a = 1;
	char* p = (char*)&a;
	return *p;	//����1��С�� | ����0�����
	return *(char*)&a;
}

int main() {
	int ret = check_sys();
	ret ? printf("С��\n") : printf("���\n");
	return 0;
}