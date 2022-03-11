#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: zero
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
