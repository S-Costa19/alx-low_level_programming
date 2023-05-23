#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
int sm;
for (sm = 'a'; sm <= 'z'; sm++)
{
putchar(sm);
}
putchar('\n');
return (0);
}
