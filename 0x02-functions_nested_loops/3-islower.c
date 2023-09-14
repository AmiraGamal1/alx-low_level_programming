#include "main.h"
/**
  * _islower - check if input is  lowercase character
  *
  * c - integer value of alphabet
  *
  * Return: 1 if lowercase characte, o otherwise
  */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);
	else
		return (0);
}
