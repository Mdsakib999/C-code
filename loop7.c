
// Simple loop problem

#include<stdio.h>
int main()
{
    int a = 0, b = 3, i;             //add kora namata
    for(i = 1; i <= 10; i++)
    {
        a = a + b;
        printf("%d x %d = %d\n", b, i, a);
    } 
    
    return 0;
}
