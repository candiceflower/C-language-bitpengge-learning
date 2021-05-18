#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main() {
	char name[] = "hello world", unknown[] = "###########";
	//int sz = sizeof(name) / sizeof(name[0]);
	int left = 0, right = strlen(name) - 1;
	for (printf("%s\n", unknown); left <= right; left++, right--) {
		Sleep(500);		//这里500的单位时毫秒，也就是0.5秒	
		system("cls");	//这是执行系统命令的一个函数，cls意为清空屏幕
		unknown[left] = name[left];
		unknown[right] = name[right];
		printf("%s\n", unknown);
	}
	return 0;
}