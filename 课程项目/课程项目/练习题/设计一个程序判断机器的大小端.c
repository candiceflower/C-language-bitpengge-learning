#include <stdio.h>

//设计一个程序判断机器的大小端
int check_sys(void) {
	int a = 1;
	char* p = (char*)&a;
	return *p;	//返回1，小端 | 返回0，大端
	return *(char*)&a;
}

int main() {
	int ret = check_sys();
	ret ? printf("小端\n") : printf("大端\n");
	return 0;
}