#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0 if execution is successful
 */

int main(void)
{
int intType;
float floatType;
char charType;
long longType;
long long longlongType;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of a int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
