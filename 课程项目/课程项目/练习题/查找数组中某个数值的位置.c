#include <stdio.h>

int main() {
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7, i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (; i < sz; i++) {
		if (arr[i] == k) {
			printf("在数组中的第%d个位置！", i+1);
			break;
		}
	}
	if (i == sz) {
		printf("未查询到该数字的位置！");
	}*/
	//上面这种方法效率比较低，每次都要从第一位开始查找，当数据量一大的时候，从头开始找明显太拉跨
	//我们要提高效率，可以采用二分查找的方法，可看原视频P10/183:26

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1, k = 7;
	//left是数组的左下标，right对应数组的右下标
	while (left <= right) {
		int mid = (left + right) / 2;	//查找数组的中间值下标
		if (arr[mid] > k) {	//如果查找出来的数值大于k
			right = mid - 1;	//那么右边的下标-1
		}
		else if (arr[mid] < k) { //反之左下标+1
			left = mid + 1;
		}
		else {	//直到查找到了就打印出来
			printf("在数组中的第%d个位置！", mid + 1);
			break;
		}
	}

	if (left > right) {	//没查找到打印未查找到
		printf("未查询到该数字的位置！");
	}

	return 0;
}