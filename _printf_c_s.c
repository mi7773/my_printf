#include "main.h"
#include <stdio.h>
/**
 * _printf_c_s - print characters to stdout
 * @format: determine the type of characters to be printed
 * @p: list of args
 * Return: number of printed charachers --> success
 *         negative value               --> error
 */
int _printf_c_s(const char *format, va_list p)
{
int i = 0, r = 0;
if (format == NULL)
return (-1);
for (; format[i] != '\0'; i++)
{
if (format[i] != '%')
r += _putchar(format[i]), i--;
else if (format[i] == '%')
{
switch (format[i + 1])
{
case 'c':
r += _putchar(va_arg(p, int));
break;
case 's':
r += _putstr(va_arg(p, char *));
break;
case '%':
r += _putchar(format[i]);
break;
case ' ':
return (-1);
case '\0':
return (-1);
case ('d'):
case ('i'):
r += _putint(va_arg(p, int), 0);
break;
default:
r += _putchar(format[i]);
r += _putchar(format[i + 1]);
}
} i++;
}
return (r);
}

