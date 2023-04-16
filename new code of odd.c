// C program to convert a string to a long integer?


#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char buffer[] = "2016 40a0b0 -1101110100110111100110 0x5abfff";
	char * ptr_end;
	long int i1, i2, i3, i4;

	x1 = strtol (buffer, &ptr_end,10);
	x2 = strtol (ptr_end, &ptr_end,16);
	x3 = strtol (ptr_end, &ptr_end,2);
	x4 = strtol (ptr_end, NULL,0);
	printf ("\nIn decimals: %ld, %ld, %ld, %ld.\n\n", x1, x2, x3, x4);
	return 0;
}
