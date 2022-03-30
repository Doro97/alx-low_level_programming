#include "main.h"
#include <stdio.h>

/**
*int _sqrt_recursion(int n)-returns the square root of a number
*@n: a given number
*Return: the square root of the number
*/

int _sqrt_recursion(int n)
{
	if(n < 0) 
	{
		return (-1);
	}
	
	if (n == 1)
	{
		return (1);
	}
	return sqrt(n);

}
