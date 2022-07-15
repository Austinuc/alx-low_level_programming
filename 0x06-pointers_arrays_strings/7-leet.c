#include "main.h"

/**
  * leet - Encodes a string into 1337. a,A=4, e,E=3, o,O=0, t,T=7 and l,L=1
  * @str: given string
  *
  * Return: Pointer to encoded string
  */

char *leet(char *str)
{
	int i = 0, j = 0;
	int lets[5] = {97, 101, 111, 116, 108}; /*ASCII for a,e,o,t,l */
	int val[5] = {52, 51, 48, 55, 49}; /*ASCI for 4,3,0,7,1 */

	while (*(str + j) != '\0')
	{
		for (; i < 5; i++)
		{
			/*check for both lower and uppercase */
			if (*(str + j) == lets[i] || *(str + j) == lets[i] - 32)
			{
				*(str + j) = val[i];
				break;
			}
		}
		i = 0;
		j++;
	}
	return (str);
}
