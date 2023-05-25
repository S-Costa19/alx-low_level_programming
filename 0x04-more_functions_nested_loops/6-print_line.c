#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line
 * @n: variable
 * Return: 0
 */


void print_line(int n)
{
int sm = 0;
while (sm < n && n > 0)
{
_putchar('_');
sm++;
}

_putchar('\n');

}
