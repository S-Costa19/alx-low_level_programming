#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * function that prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
char sm;
int i = 0;
while (i <= 9)
{
for (sm = 'a'; sm <= 'z'; sm++)
{
putchar(sm);
}
putchar('\n');
i++;
}

}
