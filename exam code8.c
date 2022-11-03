// Calculate the sum and Average of given value.


#include<stdio.h>
void main()
{
    int i,a,sum=0;
    float ave;
    printf("Enter 10 value: \n");
    for(i=1; i<10; i++)
    {
        scanf("%d", &a);
            sum+=a;
    }
    printf("sum is: %d\n", sum);
    ave=(float)sum/10;
        printf("ave = %f\n", ave);

}
