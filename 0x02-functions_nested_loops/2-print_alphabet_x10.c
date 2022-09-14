#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 * Return: Void.
 */

void print_alphabet_x10(void)
{
	int i;
	char a_bet;

	for (i = 0; i <= 9; i++)
	{
		for (a_bet = 'a'; a_bet <= 'z'; a_bet++)
		{
			_putchar(a_bet);
		}
		_putchar('\n');
	}
}
