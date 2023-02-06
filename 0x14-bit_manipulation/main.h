#ifndef MAIN_H
#define MAIN_H
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
char *uint_to_bin(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
char *set_uint_to_bin(unsigned long int n);

#endif

