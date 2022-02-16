#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char alfabeto;
	int alfabetox10;

	alfabetox10 = 0;

	while (alfabetox10 < 10)
	{
		for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
		_putchar (alfabeto);
		alfabetox10++;
		_putchar('\n');
	}
}

