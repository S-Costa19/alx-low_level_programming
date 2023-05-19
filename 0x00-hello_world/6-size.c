#include <stdio.h>
/**
 * main - print the various types on the computer
 * it is compile and run on
 *
 * Return:always 0
 */
int main(void)
{
	printf("Size of a char : %lu bytes(S)\n", sizeof(int));
	printf("Size of a int : %lu bytes(S)\n", sizeof(int));
	printf("Size of a long int : %lu bytes(S)\n", sizeof(long int));
	printf("Size of a long long int : %lu bytes(S)\n", sizeof(long long int));
	printf("Size of a float : %lu bytes(S)\n, sizeof(float));

	return (0);
}
