#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < string_length(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
  * string_length - finds the length of a string.
  * Return: length of c.
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
