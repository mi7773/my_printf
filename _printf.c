#include "main.h"
/**
 * _printf - print characters to stdout
 * @format: determine the type of characters to be printed
 * Return: number of printed charachers --> success
 *         negative value               --> error
 */
int _printf(const char *format, ...)
{
int res;
va_list p;
va_start(p, format);
res = _printf_c_s(format, p);
va_end(p);
return (res);
}
