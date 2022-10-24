// Check a number divisible by givien number or not.

#include<stdio.h>
int main()
{
    int a, divisor=10;
    scanf("%d", &a);
    if(a% divisor == 0)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;

}
