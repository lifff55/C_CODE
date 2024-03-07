#define _CRT_SECURE_NO_WARNINGS 1
//求一个数字每一位相加的和
#include <stdio.h>

int DigitSum(unsigned int n)
{
	if (n / 10)
	{
		return DigitSum(n / 10) + (n % 10);
	}
	else
		return n;
}

int main()
{
	unsigned int n = 0;
	scanf("%d",&n);
	int sum = DigitSum(n);
	printf("%d",sum);
	return 0;
}