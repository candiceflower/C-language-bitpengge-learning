#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�Զ��ػ�����С����
int main() {
	char a[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���1�����ڹػ������롰����������ȡ���ػ���\n�����룺");
	scanf("%s", a);
	if (strcmp(a, "������") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
