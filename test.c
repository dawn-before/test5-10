#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++){
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include <assert.h>
//char* my_strcpy(char* dest,const char* src){
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++){
//		;   
//	}
//	return ret;
//}
//int main(){
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#####################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;       
//}

//int main(){
//	const int num = 10;
//	int n = 100;
//
//	int* p = &num;
//	//const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)值
//	//const放在指针变量的*右边时，修饰的是指针变量本身，p不能被改变了
//
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//
//
//}
int my_strlen(char* str){
	int count = 0;
	assert(str != NULL);//保证指针的有效性

	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main(){
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}