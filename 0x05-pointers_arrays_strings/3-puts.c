#include "main.h"

/**
 * _puts - prints a string followed by new line
 *
 * @str: holds string
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
