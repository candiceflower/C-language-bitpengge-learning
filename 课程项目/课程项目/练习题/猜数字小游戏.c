#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void begin() {
	printf("=====================================\n");
	printf("=============������С��Ϸ============\n");
	printf("=============1��ʼ��0����============\n");
	printf("=====================================\n");
}

void game() {
	printf("��Ϸ��ʼ\n");
	int unknown = rand() % 100 + 1;
	int guess;
	printf("��һ�����ĸ������أ�");
	scanf("%d", &guess);
	while (1) {
		if (guess > unknown) {
			printf("���˴��ˣ���������\n");
		}
		else if (guess < unknown) {
			printf("С��С�ˣ���������\n");
		}
		else {
			printf("�¶��ˣ������Ǹ�С��ţ�\n");
			printf("��Ϸ������\n");
			break;
		}
		printf("�ٲ�һ�ΰɣ�");
		scanf("%d", &guess);
	}
}

int main() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		begin();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input == 1) {
			game();
		}
		else if (input == 0) {
			printf("��Ϸ����\n");
		}
		else {
			printf("�������\n");
		}
	} while (input);
	return 0;
}