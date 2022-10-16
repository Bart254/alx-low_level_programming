#include <stdio.h>
/**
* main - Entry point
* does not print e and q
* Return:Always zero (Success)
*/
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
