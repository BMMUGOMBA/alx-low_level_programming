#include "main.h"
#include<stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index:index unsigned int
 * Return: bit at given index else -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitStatus;
bitStatus = (n >> index) & 1;

if (bitStatus == 1)
{
bitStatus = 1;
}

if (bitStatus == 0)
{
bitStatus = 0;
}
return  (bitStatus);
}
