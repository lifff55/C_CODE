#define _CRT_SECURE_NO_WARNINGS 1
//统计1-100中出现几个数字九
#include <stdio.h>

int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 10 == 9) || (i / 10 == 9))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}