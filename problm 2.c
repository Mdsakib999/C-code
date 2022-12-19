


#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[100]; /* Declares a string of size 100 */
    int l= 0;
	
       printf("\n\nFind the length of a string :\n");
       printf("---------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    while(str[l]!='\0')
    {
        l++;
    }
    printf("Length of the string is : %d\n\n", l-1);
}








/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0; i<5; i++) {        /* 1ta porjonto star anta caila
                                  i ar man 1 baraita hoba i<6 */
        for(j=0; j<=5-i; j++) {
            printf(" ");        //this line print 1 space
        }
        for(j=5; j>=i; j--) {
            printf("*");        /*this line print 1 star */
        }
        printf("\n");
    }
    return 0;
}
*/
