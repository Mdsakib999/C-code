




#include <stdio.h>

int main(void)
{
    int d,y,m,sum;
    printf("Enter number of days: ");
    scanf("%d",&d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    sum = d % 30;
    printf("\n%d years, %d months, %d days\n",y,m,sum);
    return 0;
}
