#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: base 10 number that receives the function.
 * @index: number of the position to be returned
 * Return: Value of the bit or -1 if an error occured..
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int aux;
	unsigned int i = 0;

	aux = n;
	while (aux > 0)
	{
		aux = aux >> 1;
		i++;
	}
	i--;
		if (index > i)
			return (-1);
		n = n >> index;
		return (n % 2);
}