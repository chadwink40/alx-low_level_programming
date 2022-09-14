#include "main.h"

/**
 * main - check the code.
 * @c: character to be input.
 * Return: 1 if it is a lower case, 0 is not a lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
