#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//自动关机整蛊小程序
int main() {
	char a[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在1分钟内关机，输入“我是猪”即可取消关机！\n请输入：");
	scanf("%s", a);
	if (strcmp(a, "我是猪") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
