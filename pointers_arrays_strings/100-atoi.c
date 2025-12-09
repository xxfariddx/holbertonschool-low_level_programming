#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* do nothing */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	if (sign == -1)
		return (0 - (int)result); /* safer than -(int)result */
	return ((int)result);
}
