#include <stdio.h>

int main() {
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7, i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (; i < sz; i++) {
		if (arr[i] == k) {
			printf("�������еĵ�%d��λ�ã�", i+1);
			break;
		}
	}
	if (i == sz) {
		printf("δ��ѯ�������ֵ�λ�ã�");
	}*/
	//�������ַ���Ч�ʱȽϵͣ�ÿ�ζ�Ҫ�ӵ�һλ��ʼ���ң���������һ���ʱ�򣬴�ͷ��ʼ������̫����
	//����Ҫ���Ч�ʣ����Բ��ö��ֲ��ҵķ������ɿ�ԭ��ƵP10/183:26

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1, k = 7;
	//left����������±꣬right��Ӧ��������±�
	while (left <= right) {
		int mid = (left + right) / 2;	//����������м�ֵ�±�
		if (arr[mid] > k) {	//������ҳ�������ֵ����k
			right = mid - 1;	//��ô�ұߵ��±�-1
		}
		else if (arr[mid] < k) { //��֮���±�+1
			left = mid + 1;
		}
		else {	//ֱ�����ҵ��˾ʹ�ӡ����
			printf("�������еĵ�%d��λ�ã�", mid + 1);
			break;
		}
	}

	if (left > right) {	//û���ҵ���ӡδ���ҵ�
		printf("δ��ѯ�������ֵ�λ�ã�");
	}

	return 0;
}