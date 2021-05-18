#include "game.h"

void menu() {
	printf("--------------ɨ��-----------\n");
	printf("-------1. Play 0. Exit-------\n");
	printf("-----------------------------\n");
}

void game() {
	//�׵���Ϣ�洢
	//1. ���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2. �Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test() {
	int num;
	do {
		menu();
		srand((unsigned int)time(NULL));
		printf("��ѡ��");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����Ƿ�\n");
			break;
		}
	} while (num);
}

int main() {
	test();
	return 0;
}