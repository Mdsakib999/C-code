#include<stdio.h>
int main()
{
    int a, b,c;
    a = 50;
    b = a/2;
    c=a-2*b;
    if (c == 0) {
        printf("The number is even\n");
    }
    else {
        printf ("The number is odd\n");
    }
    return 0;
}
