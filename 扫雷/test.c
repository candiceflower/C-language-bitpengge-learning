#include "game.h"

void menu() {
	printf("--------------扫雷-----------\n");
	printf("-------1. Play 0. Exit-------\n");
	printf("-----------------------------\n");
}

void game() {
	//雷的信息存储
	//1. 布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2. 排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}

void test() {
	int num;
	do {
		menu();
		srand((unsigned int)time(NULL));
		printf("请选择：");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入非法\n");
			break;
		}
	} while (num);
}

int main() {
	test();
	return 0;
}