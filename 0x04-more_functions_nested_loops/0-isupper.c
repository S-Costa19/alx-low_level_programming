#include <stdio.h>
#include "main.h"
/*
 * _isalpha - entry point
 * @c: the the value its recieved
 * description: check if alphabet is lower or upper
 * Return: 1 when the character is upper. 0 otherwise
 */
int _isupper(int c)

{

if (c >= 'a' && c <= 'z')

{
return (0);
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
