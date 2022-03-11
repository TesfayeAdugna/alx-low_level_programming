#include <stdio.h>

/**
   * main - print alphabet in upper and lower
   *
   * Return: zero
   */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
