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
char Lowerc[26] = "abcdefghijklmnopqrstuvwxyz";
int a;
for (a = 0; a < 26; a++)
{
putchar (Lowerc[a && a != 'q' && a != 'e']);
}
putchar ('\n');
return (0);
}
