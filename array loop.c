//Calculate the average of a given element of an array.

#include<stdio.h>
int main()
{
    int a[10]={1, 5, 5, 7, 2, 8, 6, 9, 3,8},sum,i,Ave;
    for(i=0; i<=9; i++) {

        printf("%d", a[i]);
        sum = sum +i;

    }
    printf("The sum is %d\n", sum);
    Ave=sum/10;
    printf("%d\n", Ave);
}
