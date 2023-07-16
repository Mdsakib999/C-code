//Division of of given number using function.

#include<stdio.h>

void print_Divi(int x)
{
    int i;
    for(i = 1; i <= x; i++)
    {
        if( x % i ==0)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    print_Divi(329);
    return 0;
}
