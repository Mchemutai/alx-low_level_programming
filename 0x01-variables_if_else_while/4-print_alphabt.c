#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - prints alphabets in lower case except q and e
*
*Return: 0 (success)
*/

int main(void)
{
char Lowerc;

for (Lowerc = 'a'; Lowerc <= 'z'; Lowerc++)
{
if (Lowerc != 'e' && Lowerc != 'q')
putchar(Lowerc);
}
putchar ('\n');
return (0);
}
