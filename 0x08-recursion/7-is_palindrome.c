#include "holberton.h"
#include <stdio.h>
/**
* longi - check the code for Holberton School students.
* @s: thi is a pointer
* Return: void
*/

int longi(char *s)
{
int size = 0;

if (*s == '\0')
{
return (0);
}

return (size + 1 + longi(s + 1));
}

/**
 * comparison - compare the start and end of the string.
 * @start: int start.
 * @end: int end.
 * @s: thi is a pointer.
 * Return: 0
 */

int comparison(int start, int end, char *s)
{
if (s[start] == s[end])
{
if (start > end)
{
return (1);
}
return (comparison(start + 1, end - 1, s));
}
else
{
return (0);
}
}

/**
 * is_palindrome -  string is a palindrome
 * @s: thi is a pointer
 * Return: void
 */
int is_palindrome(char *s)
{

int x;
int start = 0;

x = longi(s);

if (x == 1)
{
return (1);
}
return (comparison(start, x - 1, s));
}
