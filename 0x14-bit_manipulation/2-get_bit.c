#include "main.h"

/**
 * get_bit - the Function that returns the value of a bit at
 * an index in a decimal number
 * @n: the number to be searched
 * @index: the index value of the bit
 *
 * Return: the function to return value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
