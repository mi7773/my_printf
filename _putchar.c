#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character to stdout
 * @c: character to be printed
 * Return: 1 --> success
 *         -1 --> error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
