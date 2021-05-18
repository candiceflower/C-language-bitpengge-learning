#include <stdio.h>
#include <string.h>

int main() {
	char user[20] = { 0 };
	int count = 0;
	while (count < 3) {
		printf("请输入密码：");
		scanf("%s", user);
		printf("%s\n", user);
		if (strcmp(user, "abc") == 0) {  //这里的strcmp用于判断括号内的多个字符串是否全等,全等返回0，左边大-1，右边大1
			printf("登录成功！");
			break;
		}
		printf("密码错误！");
		count++;
	}

	if (count >= 3) {
		printf("请30秒以后再次输入！");
	}
	return 0;
}