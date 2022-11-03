// Program using condition.


#include<stdio.h>
void main()
{
   int x,y;
   printf("Enter a number: \n");
   scanf("%d", &x);
   if(x<0)
    y=2*x+1;
   else if(x>0)
    y=2*x-1;
   else y=0;
   printf("value is: %d", y);
}
