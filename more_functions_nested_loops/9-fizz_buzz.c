#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" "); /* space after each element except the last */
	}

	printf("\n");

	return (0);
}
