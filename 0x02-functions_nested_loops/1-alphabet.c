#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char a_bet;

	for (a_bet = 'a'; a_bet <= 'z'; a_bet++)
	{
		_putchar(a_bet);
	}
	_putchar('\n');
}
