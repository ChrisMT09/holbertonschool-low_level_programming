#include "main.h"

/**
 * _isalpha - print if c is lowercase or uppercase
 * @c: to print
 * Return: if c is lowecase or uppercase return 1, else 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
