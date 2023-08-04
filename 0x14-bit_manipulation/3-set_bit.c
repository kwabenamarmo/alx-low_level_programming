#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1 (0 to 63)
 *
 * Return: 1 if the bit is set successfully,
 * 0 if the index is out of range, or if n is NULL
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= 64)
		return (0);

	*n |= (1UL << index);

	return (1);
}
