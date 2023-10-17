#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int puttchhr(char c);
int puttt(char *c);
int print_int(va_list inti);
int print_dec(va_list inti);

#endif
