//������������Ϸ
#include "game.h"

void menu(){
	printf("|==========��������Ϸ===========|\n");
	printf("|=======1. Play  0. Exit========|\n");
	printf("|===============================|\n");
	
}

void game() {
	char ret;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//�������
	while (1) {
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*�ж������Ӯ*/
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//�˻�����
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*�ж��˻���Ӯ*/
		ret = IsWin(board,ROW,COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*')
		printf("���ʤ����\n");
	else if (ret == '#')
		printf("�˻�ʤ��~\n");
	else
		printf("ƽ�֣�\n");

}

void test() {
	int num;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &num);
		switch (num) {
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (num != 0);
}

int main() {
	test();
	return 0;
}