#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main() {
	char name[] = "hello world", unknown[] = "###########";
	//int sz = sizeof(name) / sizeof(name[0]);
	int left = 0, right = strlen(name) - 1;
	for (printf("%s\n", unknown); left <= right; left++, right--) {
		Sleep(500);		//����500�ĵ�λʱ���룬Ҳ����0.5��	
		system("cls");	//����ִ��ϵͳ�����һ��������cls��Ϊ�����Ļ
		unknown[left] = name[left];
		unknown[right] = name[right];
		printf("%s\n", unknown);
	}
	return 0;
}