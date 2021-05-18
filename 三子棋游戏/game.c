#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		//1. ��ӡÿ�е�����
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");	//2. ��ӡ��һ�����ݾͻ���

		//3. ��ӡ�ָ���
		if (i < row - 1) {
			int t;
			for (t = 0; t < col; t++) {
				
				printf("---");
				if (t < col - 1)
					printf("|");
			}
			printf("\n");	//4. ��ӡ��ָ��к���
		}
			
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf(">��һغ�<\n");
	while (1) {
		printf("�������б�λ�ã�");
		scanf("%d", &x);
		printf("�������б�λ�ã�");
		scanf("%d", &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("λ���ѱ�ռ�ã�����������\n");
			}
		}
		else {
			printf("����Ƿ�ֵ������������\n");
		}
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf(">�˻��غ�<\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

	if (IsFull(board, ROW, COL) == 1)
		return 'Q';
	return 'C';

}