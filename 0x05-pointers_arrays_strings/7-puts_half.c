#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int m, n, i, j;

	m = string_length(str) / 2;

	if (string_length(str) % 2 == 0)
	{
		for (i = m; i < string_length(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (string_length(str) % 2 != 0)
	{
		n = (string_length(str) - 1) / 2;
		for (j = n; j <= string_length(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

/**
  * string_length - finds the length of a string.
  * Return: length
  * @pointer: pointer.
  */
int string_length(char *pointer)
{
	int j = 0;

	while (*(pointer + j) != '\0')
	{
		j++;
	}
	return (j);
}
