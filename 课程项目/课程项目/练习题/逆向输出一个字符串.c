#include <stdio.h>
#include <string.h>

//�������һ���ַ���
void reverse(char arr[]) {
	char tmp = arr[0];
	int len = strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr + 1) >= 2)
		reverse(arr + 1);
	arr[len - 1] = tmp;
}

int main() {
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}