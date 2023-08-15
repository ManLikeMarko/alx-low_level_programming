#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root of n, or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - helper function to find the square root using binary search
 * @n: input number
 * @low: lower bound of search
 * @high: upper bound of search
 * Return: natural square root of n within the specified range
 */
int _sqrt_helper(int n, int low, int high)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (mid == n / mid)
			return (mid);
		if (mid < n / mid)
			return (_sqrt_helper(n, mid + 1, high));
		return (_sqrt_helper(n, low, mid - 1));
	}
	return (high);
}
