#include <stdio.h>
#include "main.h"
/**
 * main - tries to swap variablees
 * Return: 0
 */
int main(void)
{
	int x, y;

	x = 10;
	y = 5;

	printf("%d %d \n", x, y);
	swap(x, y);
	return (0);
}
