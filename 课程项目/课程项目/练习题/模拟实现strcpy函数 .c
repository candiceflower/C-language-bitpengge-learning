#include <stdio.h>
#include <assert.h>

//ģ��ʵ��strcpy����	
char* copy(char* one, const char* two) {
	char* temp = one;
	//����ʹ�ö��Եķ��������������ǿ�ָ�룬��ʱ��������
	assert(one != NULL);
	assert(two != NULL);
	//�����twoָ����ַ�������one����ȥ������'\0'�ַ�
	while (*one++ = *two++) { ; }
	return temp;	//������char*�ĺ������������������԰�one����ʵλ�÷���ȥ
}

int main() {
	char arr1[] = "abcdefghi";
	char arr2[] = "hello";

	printf("%s\n", copy(arr1, arr2));
	return 0;
}