#include <stdio.h>
#include "main.h"
/*
 * _isalpha.c - entry point
 * @c: the the value its recieved
 * description: check if alphabet is lower or upper
 * Return: 1 if true. 0 is false
 */
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')

{
return (1);
}
else if (c >= 'A' && c <= 'Z')

{
return (1);
}
else
{

return (0);
}


}
