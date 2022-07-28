#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * len - length of string
  * @str: input string
  *
  * Return: string length
  */
int len(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
			i++;
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (i);
}

/**
  * add - adds two number strings
  * @str1: string 1
  * @str2: string 2
  * @len: length of strings
  *
  * Return: string product of numstr and num
  */

char *add(char *str1, char *str2, int len)
{
	int carry = 0, i = 0, temp = 0;
	char *result;

	result = memalloc(len);
	result = initialize_zero(result, len);
	while (i < len)
	{
		result[i] = 48;
		i++;
	}
	i = 0, len--;
	for (i = 0; i <= len; i++)
	{
		temp = (str1[len - i] - 48) + (str2[len - i] - 48) + carry;
		result[len - i] = (temp % 10) + 48;
		carry = (temp / 10);
	}
	if (carry)
		result[len - i] = carry + 48;
	return (result);
}

/**
  * memalloc - Allocates memory spaces for pointer variable
  * @memspace: bytes of memory to allocate
  *
  * Return: pointer to the allocated spaces
  */

char *memalloc(int memspace)
{
	char *result;

	result = malloc(sizeof(char) * memspace);
	if (result == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}
	return (result);
}
/**
  * initialize_zero - sets all the elements of an array to zero
  * @array: given array
  * @len: lenth of array
  *
  * Return: pointer to initialized array
  */

char *initialize_zero(char *array, int len)
{
	int i = 0;

	while (i < len)
	{
		*(array + i) = 48;
		i++;
	}
	return (array);
}

/**
  * rmleadingzero - removes any leading zero digit if any in the result
  * @result: given number string
  * @strlen: length of result string
  * @i: count variable
  *
  * Method: shifts all elements of the result to the left & terminating
  *         last element with a NULL value recursively.
  * Return: return result with no leading zero
  */

char *rmleadingzero(char *result, int strlen, int i)
{
	if (i == (strlen - 1))
	{
		result[i] = '\0';
		return (result);
	}
	result[i] = result[i + 1];
	rmleadingzero(result, strlen, i + 1);
}

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument arrays
  *
  * Return: 0 on success 98 on failure
  */

int main(int argc, char *argv[])
{
	char *result, *add1;
	int i = 0, j = 0, len1, len2, memspace, carry = 0, temp = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = len(argv[1]);
	len2 = len(argv[2]);
	memspace = len1 + len2;
	result = memalloc(memspace); /* alloc space for result */
	add1 = memalloc(memspace); /*alloc space addition */
	result = initialize_zero(result, memspace);
	for (j = 0; j < len2; j++) /* start multiplication */
	{ /*multiply all elements in argv[1] with argv[2][j] */
		i = 0, carry = 0;
		/* initialize values from multiplication */
		add1 = initialize_zero(add1, memspace);
		for (i = 0; i < len1; i++)
		{
			temp = ((argv[1][len1 - 1 - i]) - 48) *
				((argv[2][len2 - 1 - j] - 48)) + carry;
			/*always shift to left j times */
			add1[memspace - 1 - i - j] = (temp % 10) + 48;
			carry = temp / 10;
		} /*add carry to next digit by the left */
		add1[memspace - 1 - i - j] = carry + 48;
		/* add multiplication values to final result */
		result = add(result, add1, (memspace));
	} /* remove leading zero if any from result */
	if (result[0] == 48)
		result = rmleadingzero(result, memspace, 0);
	printf("%s\n", result);
	return (0);
}
