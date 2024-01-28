#include "main.h"
#include <stdio.h>
/**
 * _putstr - print string to stdout
 * @s: string to be printed
 * Return: number of printed charachers --> success
 *          negative value               --> error
 */
int _putstr(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

