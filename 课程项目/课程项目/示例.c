#include <stdio.h>
#include <assert.h>

//模拟实现strlen函数
int len(const char* str) {
	assert(str != NULL);

	int count = 0;
	while (*(str++)) {
		count++;
	}
	return count;
}

int main() {
	char str[] = "bit";
	int lens = len(str);
	printf("%d\n", lens);
	return 0;
}
