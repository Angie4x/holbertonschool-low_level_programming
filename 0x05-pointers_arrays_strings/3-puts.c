#include "main.h"
/**
*_puts - prints a string
*@str: prints a string.
*/
void _puts(char *str)
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
