#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//void reverse_string(char* string)
//{
//	int sz = strlen(string);
//	char temp = 0;
//
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		temp = string[left];
//		string[left] = string[right];
//		string[right] = temp;
//
//		left++;
//		right--;
//	}
//}

//ตÝน้
void reverse_string(char* str)
{
	char temp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = (char)'\0';
	if(strlen(str+1)>=2)
		reverse_string(str+1);
	*(str + len - 1) = temp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s",arr);

	return 0;
}