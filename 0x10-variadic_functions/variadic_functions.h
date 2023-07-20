#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print(va_list arg);
void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * struct format - name of a set of data
 * typedef formatter - new data name for struct format
 * @str: first member
 * @print: a pointer to a function
 */
typedef struct format
{
	char str;
	void (*print)(va_list);
} formatter;
#endif
