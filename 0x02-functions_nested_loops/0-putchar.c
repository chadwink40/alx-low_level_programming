main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	int i;

	str = "Alx";
	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
