#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar('0' + a);
if (a != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
