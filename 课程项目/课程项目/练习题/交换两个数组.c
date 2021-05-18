#include <stdio.h>
#include <string.h>

//交换两个数组
int main() {
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[] = { 7,6,5,4,3,2,1 };
	int tmp = 0;
	int i = 0;
	for (i = 0; i < 7; i++) {
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for (i = 0; i < 7; i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}