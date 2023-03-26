#include "main.h"
/**
 * swap - tries to swap two variable values
 * @i: is the first variable
 * @j: is the second variable
 * return: integer
 */
int swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
	printf("%d %d \n",x ,y);
	return (0);
}
