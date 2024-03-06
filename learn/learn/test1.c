#define _CRT_SECURE_NO_WARNINGS 1
//写代码让三个整数从大到小输出

#include <stdio.h>

void exchange(int* pi, int* pj)
{
	int temp = 0;
	temp = *pi;
	*pi = *pj;
	*pj = temp;
}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	//输入
	scanf("%d %d %d",&a,&b,&c);
	
	if (a < b)
	{
		exchange(&a,&b);
	}
	if (a < c)
	{
		exchange(&a, &c);
	}
	if (b < c)
	{
		exchange(&b, &c);
	}

	//输出
	printf("%d,%d,%d",a,b,c);
	return 0;

}