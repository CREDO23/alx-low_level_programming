#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main -  program that adds positive numbers
* @argc: arguement count
* @argv: argument vector
* Return: an integer
*/

int main(int argc, char *argv[])
{
int i, res;
unsigned int c;
char *x;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
x = argv[i];

for (c = 0; c < strlen(x); c++)
{
if (x[c] < 48 || x[c] > 57)
{
printf("Error\n");
return (1);
}
}
res += atoi(x);
x++;
}
printf("%d\n", res);
}
else
{
printf("0\n");
}
return (0);
}

