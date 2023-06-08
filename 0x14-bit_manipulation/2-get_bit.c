#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vl;

	if (index > 0)
		return (-1);

	bit_vl = (n >> index) & 1;

	return (bit_vl);
}
