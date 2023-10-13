#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char str[];

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
		{
			str[] = "FizzBuzz";
			printf("s% ", str);
		}
		else if ((i % 5) == 0)
		{
			str[] = "Buzz";
			printf("s% ", str);
		}
		else if ((i % 3) == 0)
		{
			str[] = "Fizz";
			printf("s% ", str);
		}
		else
		{
			printf("d% ", i);
		}
	}
	printf("\n");
	return (0);
}
