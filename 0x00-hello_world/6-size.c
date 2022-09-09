#include <stdio.h>



/**
 *
 *  * main - prints the size of many variable types
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of a char:%d bytes(s)\n", sizeof (a));
printf("size of an int:%d bytes (s)\n",sizeof (b));
printf("size of a long int:%d bytes(s)\n",sizeof (c));
printf("size of a long long int: byte9s)\n", sizeof (d));
printf("size of a float:%d byte(s)\n", sizeof (e));
	    return (0);

}
