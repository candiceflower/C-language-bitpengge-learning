#include <stdio.h>
#include <string.h>

int main() {
	char user[20] = { 0 };
	int count = 0;
	while (count < 3) {
		printf("���������룺");
		scanf("%s", user);
		printf("%s\n", user);
		if (strcmp(user, "abc") == 0) {  //�����strcmp�����ж������ڵĶ���ַ����Ƿ�ȫ��,ȫ�ȷ���0����ߴ�-1���ұߴ�1
			printf("��¼�ɹ���");
			break;
		}
		printf("�������");
		count++;
	}

	if (count >= 3) {
		printf("��30���Ժ��ٴ����룡");
	}
	return 0;
}