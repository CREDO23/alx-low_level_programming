#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - print type with corresponding print function
 * @type: print type
 * @func: print function
 */
typedef struct print
{
	char *type;
	void (*func)(va_list);
} dt_t;



#endif
