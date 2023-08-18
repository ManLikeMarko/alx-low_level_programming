#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	for (const char *c = format; *c != '\0'; c++)
	{
		switch (*c)
		{
			case 'c':
				{
					char ch = va_arg(args, int);
					printf("%c", ch);
					break;
				}
			case 'i':
				{
					int num = va_arg(args, int);
					printf("%d", num);
					break;
				}
			case 'f':
				{
					float num = va_arg(args, double);
					printf("%f", num);
					break;
				}
			case 's':
				{
					char *str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
					}
					else 
					{
						printf("%s", str);
					}
					break;
				}
			default:
				break;
		}
	}
	va_end(args);
}

int main(void)
{
	print_all("cisf", 'A', 42, 3.14, "Hello");
	return 0;
}

