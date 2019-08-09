#ifndef HOLBERTON_H_
#define HOLBERTON_H_

/*
 * ============================================================================
 *
 *       Filename:  holberton.h
 *
 *    Description:  Header for 0x14-bit_manipulation
 *
 *        Version:  1.0
 *        Created:  08/08/2019 01:48:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dario
 *   Organization:  Holberton School
 *
 * ============================================================================
 */


int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
