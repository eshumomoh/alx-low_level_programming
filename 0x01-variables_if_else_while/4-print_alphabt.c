#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Description: using the main function
 * this progam prints alphabet in lowercase
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')

{
	putchar(ch)
}
}
putchar('\n');
return(0);
}
	
