#include "holberton.h"

/**
 *_isalpha - function print islower int c lowercase or uppercase
 *@c: caracter to check
 *
 *Return: 0
 */
int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
{
return (1);
}
else
{
return (0);
}
}
