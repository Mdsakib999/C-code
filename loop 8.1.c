#include<stdio.h>
int main()
{
    int n, i, m=0;
    for(n=1; n<=20; n++)
        {
        for(i=1; i<=10; i++)
         {
             m=m+n;
            printf("%d x %d= %d\n", n, i, n*i);

            if(i==0) {
                m=0;
            }
        }
    }
    return 0;
}
