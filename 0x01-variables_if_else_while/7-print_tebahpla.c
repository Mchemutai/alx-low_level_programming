#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
char Lowerc;
for (Lowerc = 'z'; Lowerc >= 'a'; Lowerc--)
putchar(Lowerc);
putchar('\n');
return (0);
}
