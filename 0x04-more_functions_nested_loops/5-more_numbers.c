#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers x10 times
 * function that prints 10 times numbers
 * Return: void
 */
void more_numbers(void)
{
int sm;
int i = 0;
while (i <= 9)
{
for (sm = '0'; sm <= '14'; sm++)
{
putchar(sm);
}
putchar('\n');
i++;
}

}
