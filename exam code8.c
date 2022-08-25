#include<stdio.h>
void main()
{
    int i,a,sum=0;
    float ave;
    for(i=0; i<10; i++)
    {
        scanf("%d", &a);
            sum+=a;
    }
    printf("sum is %d\n", sum);
    ave=(float)sum/10;
        printf("ave=%f\n", ave);


}
