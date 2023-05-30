#include "stdio.h"
#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int sm = *a;
	*a = *b;
	*b = sm;
}

