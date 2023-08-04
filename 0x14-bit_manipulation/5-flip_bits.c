#include "main.h"

/**
 * flip_bits -thebfunction that  counts the number of
 * bits to change its value
 * to get from one number to another
 * @n: the first numb
 * @m: the second second numb
 *
 * Return: the value to number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}
