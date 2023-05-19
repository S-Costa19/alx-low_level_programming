#include <stdio.h>
#include <unistd.h>

/**
 * main - Entyr point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */

int main(void)

{

int b, a;


for (b = '0'; b <= '9'; b++)

{
for (a = '0'; a <= '9'; a++)
{
if (b < a)
{
putchar(b);

putchar(a);

if (b != '8' || (b == '8' && a != '9'))
{
putchar(',');

putchar(' ');

}
}
}
}
putchar('\n');
return (0);
}
