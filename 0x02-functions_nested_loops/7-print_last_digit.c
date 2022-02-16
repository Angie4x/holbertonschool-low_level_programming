#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: number
 * Return: the value of the last digit
 */

int print_last_digit(int b)
{
	int LD;

	LD = b % 10;

	if (LD < 0)
		LD = LD * -1;
	_putchar ('0' + LD);
	return (LD);
}
