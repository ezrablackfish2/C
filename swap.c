#include "main.h"
/**
 * swap - tries to swap two variable values
 * @i: is the first variable
 * @j: is the second variable
 * return: integer
 */
int swap(int x, int y)
{
	int *temp;
	int *ezra, *joss;

	ezra = &x;
	joss = &y;
	printf("the address of x is %p and the address of y is %p\n",ezra ,joss);
	temp = ezra;
	ezra = joss;
	joss = temp;
	printf("%d %d \n",x ,y);
	printf("the address of x is %p and the address of y is %p\n",ezra ,joss);
	return (0);
}
