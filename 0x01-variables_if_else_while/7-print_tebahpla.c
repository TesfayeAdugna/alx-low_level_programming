#include <stdio.h>

/**
   * main - prints alphabet in reverse
   *
   * Return: zero
   */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
