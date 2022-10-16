#include <stdio.h>
/**
* main - Entry point
* displays 0 to 9
* Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
