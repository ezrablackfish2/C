#include <stdio.h>
#include "main.h"
/**
 * main - trying to learn array
 * Return: zero (0)
 */
int main(void)
{
	int ezra[10];
	int *point;
	int i;

	point = &ezra[0];
	*point = 10;
	printf("%d\n", ezra[0]);
	*(point + 1) = 10;
	printf("%d\n", ezra[1]);
	for (i = 1; i < 10; i++)
	{
		*(point + i) = *(point + (i-1)) + 10;
		printf("%d \t \a \n", ezra[i]);
	}
	return (0);
}
