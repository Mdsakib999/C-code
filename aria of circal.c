#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" Enter a b c \n");
	scanf("%d %d %d",&a,&b,&c);

        if(a>b && a>c)
        {
            printf("Highest number is a: %d",a);
        }
        else if(b>c && b>a)
        {
            printf("Highest number is b: %d",b);
        }
        else
        {
            printf("Highest number is c: %d",c);
        }
	return 0;
}
