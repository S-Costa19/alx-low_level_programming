#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)

{
int sm;
sm = 0;
for (n--; n >= 0; n--, sm++)
{
printf("%d", a[sm]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
