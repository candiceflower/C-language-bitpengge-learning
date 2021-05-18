#include <stdio.h>
#include <assert.h>

//模拟实现strcpy函数	
char* copy(char* one, const char* two) {
	char* temp = one;
	//这里使用断言的方法，如果传入的是空指针，及时报错提醒
	assert(one != NULL);
	assert(two != NULL);
	//这里把two指向的字符拷贝到one里面去，包括'\0'字符
	while (*one++ = *two++) { ; }
	return temp;	//我们是char*的函数，所以我们最后可以把one的其实位置返回去
}

int main() {
	char arr1[] = "abcdefghi";
	char arr2[] = "hello";

	printf("%s\n", copy(arr1, arr2));
	return 0;
}