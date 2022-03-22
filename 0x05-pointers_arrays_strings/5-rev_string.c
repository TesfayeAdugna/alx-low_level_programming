#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 *
 * string_length: prints number of characters.
 * @s: store character.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char *start, *end, ch;
	int length, i;

	length = string_length(s);

	start = s;
	end = s;

	for (i = 0; i < (length - 1); i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
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
