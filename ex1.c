#include <stdio.h>

int main (int argc, char *argv[]) 
{
	printf("Let's take an exam for puts(3):\n");

	printf("fputc(): ");
	fputc('C', stdout);
	
	printf("\nfputs(): ");
	fputs("CCC", stdout);

	printf("\nputc(): ");
	putc('s', stdout);

	printf("\nputchar(): ");
	putchar('v');

	printf("\nputs(): ");
	puts("Hello, World.");


	return 0;
}
