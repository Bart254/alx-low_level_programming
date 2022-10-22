#include <stdio.h>
/**
* main - Prints numbers with fizz buzz in between
* Return: 0 {Successful)
*/
int main(void)
{
	int number = 1;

	while (number < 101)
	{
	if (number % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (number % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", number);
	}
	number++;
	}
	printf("\n");
	return (0);
}
