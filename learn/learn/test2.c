#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ1-100֮������3�ı���������
#include <stdio.h>



int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}