//测试三子棋游戏
#include "game.h"

void menu(){
	printf("|==========三子棋游戏===========|\n");
	printf("|=======1. Play  0. Exit========|\n");
	printf("|===============================|\n");
	
}

void game() {
	char ret;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//玩家下棋
	while (1) {
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*判断玩家输赢*/
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//人机下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*判断人机输赢*/
		ret = IsWin(board,ROW,COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*')
		printf("玩家胜利！\n");
	else if (ret == '#')
		printf("人机胜利~\n");
	else
		printf("平局！\n");

}

void test() {
	int num;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：");
		scanf("%d", &num);
		switch (num) {
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (num != 0);
}

int main() {
	test();
	return 0;
}