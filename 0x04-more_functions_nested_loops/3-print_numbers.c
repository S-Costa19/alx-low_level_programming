#include "main.h"

/*
 * main - print_numbers 0 to 9
 * Description: prints
 * Return: void
 */

void print_numbers(void)

{
int a = 0;
while (a <= 9)
{
_putchar(a + '0');
_putchar('\n');
a++;
}
}
