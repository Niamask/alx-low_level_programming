#include <stdio.h>
/**
 * main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

int main(void)
{
        int c;

        for (c = 0; c < 10; c++)
		putchar('0' + c);
     
        putchar('\n');
        return(0);
}

