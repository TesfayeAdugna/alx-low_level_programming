#include "main.h"
#include <stdio.h>

/**
 * swap_int - is a function to swap two numbers
 *
 * @a: first integer value to be swaped
 * @b: second integer value to be swaped
 */
void swap_int(int *a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
