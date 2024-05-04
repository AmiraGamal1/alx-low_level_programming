#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - check if arg is digit
  * @ptr: pointer to arg
  * Return: 1 if == digit 0 else
  */
int _isdigit(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (!(ptr[i] >= '0' && ptr[i] <= '9'))
			return (0);
	}
	return (1);
}
/**
  * _memset - set memory to zero
  * @ptr: pointer to allocated memory
  * @size: size of allocated memory
  * Return: pointer to the allocated memory
  */
char *_memset(char *ptr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = '0';
	}
	return (ptr);
}
/**
  * _memmove - make forward memory shift
  * @src: pointer to allocated memory
  * @dest: destination pointer
  * @n: number of byte to move
  * Return: pointer to destination
  */
char *_memmove(char *dest, char *src, int n)
{
	int i;

	if (dest < src)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
/**
  * _print - print digit
  * @ptr: pointer to string of digit
  * Return: void
  */
void _print(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);
	_putchar('\n');
}
/**
  * _strlen - count the length of the string
  * @ptr: pointer to the string
  * Return: string length
  */
int _strlen(char *ptr)
{
	int i = 0;

	while (ptr && ptr[i] != '\0')
		i++;
	return (i);
}
/**
  * mul - multiple two positive number
  * @n1: positive number
  * @n2: positive number
  * Return: pointer to mul result
  */
char *mul(char *n1, char *n2)
{
	int l1, l2, size, i, j, carry, product, start;
	char *res;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	size = l1 + l2;
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	res = _memset(res, size);
	res[size] = '\0';
	/* multiply n1 * n2 and add result in res */
	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			product = (n1[i] - '0') * (n2[j] - '0') +
				(res[i + j + 1] - '0') + carry;
			res[i + j + 1] = (product % 10) + '0';
			carry = product / 10;
		}
			res[i] += carry;
	}
	/* remove all zero in the beginning */
	start = 0;
	while (res[start] == '0' && start < (size - 1))
		start++;
	if (start > 0)
	{
		res =  _memmove(res, res + start, size - start);
		res[size - start] = '\0';
	}
	return (res);
}
/**
 * main - check the code
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 if success 98 if error
*/
int main(int argc, char *argv[])
{
	char *err = "Error";
	char *res;
	int i;

	/* check the number of argument */
	if (argc != 3)
	{
		for (i = 0; err[i] != '\0'; i++)
		{
			_putchar(err[i]);
		}
		_putchar('\n');
		exit(98);
	}
	/*check if argv[0] and argv[1] is digit */
	if (!(_isdigit(argv[1])) || !(_isdigit(argv[2])))
	{
		for (i = 0; err[i] != '\0'; i++)
		{
			_putchar(err[i]);
		}
		_putchar('\n');
		exit(98);
	}
	res = mul(argv[1], argv[2]);
	_print(res);
	free(res);
	return (0);
}
