#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num < 0)
	{
		num = -num;
	}
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("divide by 2 or 3");
	}
	else printf("not divide by 2 or 3");

	return 0;
}