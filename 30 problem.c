//calculate the sum of array

#include<stdio.h>
int main()
{
    int a[10], sum = 0, i;

    printf(" enter the value : \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &a[i]);

    }

    for (i = 0; i<10; i++)
    {
        sum = sum + a[i];
    }
    printf("enter the sum : %d\n", sum);


    return 0;
}
