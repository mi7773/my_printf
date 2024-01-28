#include "main.h"
/**
 * find_num_len - return the length of a ngiven number
 * @num: the given number
 * Return: length
 */
int find_num_len(int num)
{
int f, j, i;
char num_chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int num_ints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

(void) num_chars;
(void) num_ints;
(void) f;
(void) j;

if (num / 10 == 0)
{
return (1);
}
i = 1 + find_num_len(num / 10);
return (i);
}
