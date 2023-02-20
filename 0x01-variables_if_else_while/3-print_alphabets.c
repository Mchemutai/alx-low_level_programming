#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - prints alphabets in lower case and upper case
*
*Return: 0 (success)
*/

int main(void)
{
char Lowerc[26] = "abcdefghijklmnopqrstuvwxyz";
char Upperc[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a;
a = 0;
for (a = 0; a < 26; a++)
{
putchar (Lowerc[a]);
putchar ('\n');
putchar (Upperc[a]);
}
return (0);
}
