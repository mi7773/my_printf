#ifndef main_H
#define main_H
#include <stdarg.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
char *_str_invoke(char *main_str, char *invoked, int index);
int _strlen_recursion(char *s);
int find_num_len(int num);
int _printf_c_s(const char *format, va_list p);
int _putstr(char *s);
int _putint(int s, int c);
#endif
