#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Start pointer
 * Return: always n
 * @a: number to print
 */

int print_last_digit(int a)
{
int n = a % 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
