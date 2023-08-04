#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/*function prototypes*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned index);
#endif
