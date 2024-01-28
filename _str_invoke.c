#include "main.h"
#include <stdlib.h>
/**
 * _strlen_recursion - finds the length of a given string
 * @s: a pointer to the string
 * Return: the length of te given string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
/**
 * _str_invoke - invoke a string inside into another
 * @main_str: a pointer to the main string
 * @invoked: a pointer to the string will be invoked
 * @index: the index the invoking will start from
 * Return: a pointer to a new string containing the main string and the invoked
 */
char *_str_invoke(char *main_str, char *invoked, int index)
{
int all_len, main_len, inv_len, j = 0, i = 0;
char *new_str;
inv_len = _strlen_recursion(invoked);
main_len = _strlen_recursion(main_str);
all_len = inv_len + main_len;
new_str = malloc(sizeof(char) * all_len);
if (index > 0)
{
while (i < index)
{
new_str[i] = main_str[i];
i++;
}
}
while (invoked[j] != '\0')
{
new_str[i] = invoked[j];
i++;
j++;
}
while (main_str[index + 2] != '\0')
{
new_str[i] = main_str[index + 2];
i++;
index++;
}
new_str[i] = '\0';
return (new_str);
}
