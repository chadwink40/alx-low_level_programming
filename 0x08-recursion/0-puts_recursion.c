#include "main.h"

/**
 * _puts_recursion a fxn that prints a string
 * @s: a pointer that point and to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
