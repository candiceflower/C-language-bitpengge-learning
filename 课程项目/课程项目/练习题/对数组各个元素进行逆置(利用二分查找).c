#include <stdio.h>
#include <string.h>

//���������Ԫ�ؽ�������(���ö��ֲ���)
void init(int* arr, int sz) {	//��ʼ������Ϊȫ0
	int i = 0;
	for (; i < sz; i++) {
		arr[i] = 0;
	}
}

void print(int* arr, int sz) {	//��ӡ�����ÿ��Ԫ��
	int i = 0;
	for (; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int* arr, int sz) {  //ʵ����������ã�ʹ�õ���==Ч�ʵͣ�
	int i, j;
	for (i = 0; i < sz - 1; i++) {	//��������
		for (j = 0; j < sz - i - 1; j++) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}

void Reverse(int* arr, int sz) {	//���ö��ֲ�������Ԫ��
	int left = 0;
	int right = sz - 1;
	char tmp = 0;
	while (left < right) {
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main() {
	int arr[10] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	int arr1[] = {1,2,3,4,5};
	sz = sizeof(arr1) / sizeof(arr1[0]);
	Reverse(arr1, sz);
	print(arr1, sz);
	return 0;
}