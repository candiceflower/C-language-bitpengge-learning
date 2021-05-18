#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void begin() {
	printf("=====================================\n");
	printf("=============猜数字小游戏============\n");
	printf("=============1开始，0结束============\n");
	printf("=====================================\n");
}

void game() {
	printf("游戏开始\n");
	int unknown = rand() % 100 + 1;
	int guess;
	printf("猜一猜是哪个数字呢：");
	scanf("%d", &guess);
	while (1) {
		if (guess > unknown) {
			printf("大了大了，你再想想\n");
		}
		else if (guess < unknown) {
			printf("小了小了，你再想想\n");
		}
		else {
			printf("猜对了，你真是个小天才！\n");
			printf("游戏结束！\n");
			break;
		}
		printf("再猜一次吧：");
		scanf("%d", &guess);
	}
}

int main() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		begin();
		printf("请选择：");
		scanf("%d", &input);
		if (input == 1) {
			game();
		}
		else if (input == 0) {
			printf("游戏结束\n");
		}
		else {
			printf("输入错误\n");
		}
	} while (input);
	return 0;
}