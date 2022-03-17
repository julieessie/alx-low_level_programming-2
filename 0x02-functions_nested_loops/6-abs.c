#include "main.h"

/**
  * _abs - Computes the value of an integer
  * @int: integer to be checked
  *
  * Return: Always 0 (success)
  */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x);
	}
}
