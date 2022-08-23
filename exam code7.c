#include<stdio.h>
void main()
{
   int x,y;
   scanf("%d", &x);
   if(x<0)
    y=2*x+1;
   else if(x>0)
    y=2*x-1;
   else y=0;
   printf("%d", y);
}
