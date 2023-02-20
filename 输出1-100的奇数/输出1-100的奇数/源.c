# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int num = 1;

	for (num = 1; num <= 100; num++)
		if (num % 2 == 1)
			printf("%-5d", num);

	return 0;
}