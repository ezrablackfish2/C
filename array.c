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

	point = &ezra[0];
	*point = 10;
	printf("%d\n", ezra[0]);
	*(point + 1) = 20;
	printf("%d\n", ezra[1]);
	return (0);
}
