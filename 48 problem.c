// (Namata) 
// multiplication table using while loop in C


#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d\n", &n);
    scanf("%d", &i);

    while(i <= 10)
    {

        printf("%d x %d = %d\n", n, i, n*i );

        i = i + 1;
    }
    return 0;
}

