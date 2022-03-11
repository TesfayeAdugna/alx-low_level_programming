#include <stdio.h>

/**
* main - Prints all posible different combinations of two digits
* Return: 0
**/

int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);

			if (!(x == 56 && y == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
