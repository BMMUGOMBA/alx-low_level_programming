
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

/*
*initially flips is equal to 0
*/
int flips = 0;
while (n > 0 || m > 0)
{

int temp1 = (n & 1);
int temp2 = (m & 1);

if (temp1 != temp2)
{
flips++;
}
/*
*right shifting n and m
*/
n >>= 1;
m >>= 1;
}

return (flips);
}
