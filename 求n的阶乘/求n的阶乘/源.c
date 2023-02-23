# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int sum = 1;
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("%d/t", sum);
	return 0;
}