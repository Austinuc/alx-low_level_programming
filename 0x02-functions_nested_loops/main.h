#ifndef _main_h_
#define _main_h_

int _putchar(char);
/**
  * Prints characters to the std output
  */

void print_alphabet(void);
/* Prints alphabets in lower case */

void print_alphabet_x10(void);
/* Prints 10 times all the alphabets in lowercase */

int _islower(int c);
/* Checks for lowercase characters and returns
 * 1: if true
 * 0: otherwise
 */

int _isalpha(int c);
/* Checks for alphabetic character and returns
 * 1: is a letter, lower or uppercase
 * 0: otherwise
 */

int print_sign(int n);
/* Prints the sign of a number,
 * Returns: 1 and prints + if n > zero
 * Return: 0 and prints 0 if n = zero
 * Return: -1 and prints - if n < zero
 */

int _abs(int);
/* Returns the absolute value of a given int */

int print_last_digit(int);
/* Prints the last digits of a given number */

void jack_bauer(void);
/* Prints every minute of the day, starting from 00:00 23:59 */

void times_table(void);
/* Print 9 times table */

int add(int, int);
/* Returns the sum of two integers */

#endif
