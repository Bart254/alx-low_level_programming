#include <stdio.h>
/**
* main - Entry point
* Program prints both alphabet cases
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet = 'a';
char upper_a = 'A';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

while (upper_a <= 'Z')
{
putchar(upper_a);
upper_a++;
}
putchar('\n');
return (0);
}
