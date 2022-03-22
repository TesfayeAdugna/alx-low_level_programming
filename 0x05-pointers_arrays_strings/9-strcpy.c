#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src.
 *
 * @dest: pointer to the buffer.
 * @src: pointer to the source string.
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = string_length(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
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
