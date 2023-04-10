#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int baseInt = 1, res = 0, lenArr = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[lenArr])
	{
		lenArr++;
	}
	while (lenArr)
	{
		if (b[lenArr - 1] != '0' && b[lenArr - 1] != '1')
		{
			return (0);
		}
		if (b[lenArr - 1] == '1')
		{
			res += baseInt;
		}
		baseInt *= 2;
		lenArr--;
	}
	return (res);
}
