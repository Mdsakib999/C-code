// Simple loop problem


#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d\n", &n);
    scanf("%d", & i);

    for(i; i <= 10; i++)
    {

        printf( "%d x %d = %d\n", n, i, n*i );


    }
    
    return 0;
}

