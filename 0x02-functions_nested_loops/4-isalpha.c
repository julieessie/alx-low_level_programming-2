#include "main.h"

/**
  * _isalpha - Checks if c is a letter
  * @c: The character to be checked
  *
  * Return: 1 if successful 0 if otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
