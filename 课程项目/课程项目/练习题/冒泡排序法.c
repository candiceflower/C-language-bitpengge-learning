#include <stdio.h>
#include <string.h>
//√∞≈›≈≈–Ú∑®
void bubble(int* num, int sz) {
	int i, j;
	int guess = 1;
	for (i = 0; i < sz - 1; i++) {
		for (j = 0; j < sz - i - 1; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				guess = 0;
			}
		}
		if (guess == 1) {
			return;
		}
	}
}

int main() {
	int num[] = { 5,7,6,2,11,8 };
	int i = 0;
	int sz = sizeof(num) / sizeof(num[0]);
	bubble(num, sz);
	for (; i < sz; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}