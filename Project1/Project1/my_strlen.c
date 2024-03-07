#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
int my_strlen(char* arr)
{
	if (*arr)
	{
		return 1 + my_strlen(arr+1);
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	char arr[] = "abcdefg";
	int ret = my_strlen(arr);
	printf("%d ",ret);

	return 0;
}