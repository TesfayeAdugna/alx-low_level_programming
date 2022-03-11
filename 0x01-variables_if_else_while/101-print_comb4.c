#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 *
 * Return:0
 */

int main(void)
{
int x, y, z;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
if (y > x && z > y)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (x != 7 || y != 8 || z != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
}
putchar('\n');
return (0);
}
