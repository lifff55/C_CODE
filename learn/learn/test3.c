#define _CRT_SECURE_NO_WARNINGS 1
//求两个数的最大公约数
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	int c = 0;

	scanf("%d %d",&a,&b);
	while (c = a % b)
	{		
		a = b;
		b = c;
	}

	printf("%d ",b);

	return 0;
}