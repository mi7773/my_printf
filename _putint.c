#include "main.h"
/**
 * _putint - print digits
 * @s: the number argument
 * @c: checker
 * Return: the lenght of the number
 */
int _putint(int s, int c)
{
int i = 0;
if (s == -2147483648)
{
s = -s;
i = 1;
_putchar('-');
_putchar('2');
_putint(147483648, 1);
return (find_num_len(s) + i);
}
if (s == 0 && c == 0)
{
_putchar ('0');
return (1);
}
if (s == 0 && c == 1)
return (0);
if (s < 0)
{
s *= -1;
_putchar(45);
i = 1;
}
_putint(s / 10, 1);
_putchar('0' + s % 10);
return (find_num_len(s) + i);
}
