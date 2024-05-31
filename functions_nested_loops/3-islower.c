#include "main.h"

/**
 * _islower - print abc-z, if print c, return 1, else return 0
 * Return: Always 1 if print c
 * @c: to print c
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
