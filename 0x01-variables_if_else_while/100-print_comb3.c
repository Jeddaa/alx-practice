#include <stdio.h>

/**
 *main -print all possible combination of 2 digits
 *and the 2 digits must be differrent.
 *
 *Return: 0
 */

int main(void)
{
int i = 48;
int j;
while (i < 58)
{
j = 48;
while (j < 58)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
