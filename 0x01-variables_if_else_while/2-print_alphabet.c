#include <stdio>
/**
 * main - prints alphabets in lower case
 *
 * Description: using the main function
 * this program prints alphabet in lower case
 * Return: Always (success) 
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar (ch);
}
putchar ('\n');
return (0);
}
