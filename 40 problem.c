// Swap two number

#include<stdio.h>
void main(int x, int y)
{
   int t;
   t = x;
   x = y;
   y = t;
   printf("%d %d\n", x, y);
}
 main()
{
    int a = 3, b = 4;
    swap(a,b);
    printf("%d %d", a, b);
}
