#include<stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    while (c > 0) {
        a = a + 1;
        b = b - 1;
        c--;
    }
    printf("a= %d, b= %d, c= %d", a,b,c);
    return 0;
}
