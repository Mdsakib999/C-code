// Write a program in C to display the cube of the number upto a given integer???




#include <stdio.h>
void main()
 {
    int i,ctr;
    printf("Input number of terms : ");
    scanf("%d", &ctr);
    for(i=1; i<=ctr; i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }