#include <stdio.h>

/**
   * main - print hexadecimal numbers in lowercase
   *
   * Return: zero
   */
int main(void)
{
	int i;
	int x;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
