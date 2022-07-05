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

#endif
