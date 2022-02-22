#include "main.h"
/**
*swap_int - waps the values of two integers
*@a: variable
*@b: variable
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
