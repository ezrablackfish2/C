#include <stdio.h>
/**
 * main - trying to create a pointer
 * Return: nothing
 */
void main(void)
{
	int x = 1;
	int y = 2;
	int z[10];
	int *ezra;
	int *joss;

	ezra = &x;
	printf("result of x is %d\n", x);
	printf("result of y is %d\n", y);
	y = *ezra;
	printf("result of y is changed to %d\n", y);
	*ezra = 22;
	printf("result of x is now %d\n", x);
	ezra = &z[0];
	*ezra = 10;
	printf("value of the first index of z is %d\n", z[0]);
	*ezra += 10;
	printf("after summation ezra is %d\n", z[0]);
	joss = ezra;
	printf("the new pointer is %p and %d\n", joss, *joss);
}
