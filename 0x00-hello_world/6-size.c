
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
int intype;
char chartype;
long longtype;
long long int longinttype;
float floattype;

printf("Size of a char: %i byte(s) \n", sizeof(chartype));
printf("Size of an int: %i byte(s)\n", sizeof(intype));
printf("Size of a long int: %i byte(s)\n", sizeof(longtype));
printf("Size of a long long int: %i byte(s)\n", sizeof(longinttype));
printf("Size of a float: %i byte(s)\n", sizeof(floattype));
  
return (0);

}
