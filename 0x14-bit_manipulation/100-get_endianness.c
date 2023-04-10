#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int i = 1;
int endianStat;
char *c = (char *)&i;
if (*c)
endianStat = 1;
else
endianStat = 0;

return (endianStat);
}
