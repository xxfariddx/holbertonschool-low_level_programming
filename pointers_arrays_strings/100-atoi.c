#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* do nothing, sign remains unchanged */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break; /* stop once digits have ended */

		i++;
	}

	return (result * sign);
}
