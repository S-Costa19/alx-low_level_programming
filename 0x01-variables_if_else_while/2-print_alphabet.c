#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int sm;
for (sm = 'a'; sm <= 'z'; sm++)
{
putchar(sm);
}
putchar('\n');
return (0);
}
