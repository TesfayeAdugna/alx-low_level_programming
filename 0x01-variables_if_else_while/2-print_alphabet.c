#include <stdio.h>
#include <stdlib.h>
/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
