// Find Prime number using C.


#include<stdio.h>
int main()
{
    int n, i, cunt=0;
    printf(" Enter any positive number\n");
    scanf("%d", &n);
    for(i=2; i<n; i++) {
        if(n % i ==0) {
          cunt++;
          break;
        }
    }
    if(cunt==0) {
        printf("Prime number\n");
    }
    else {
        printf("Not prime number\n");
    }

    return 0;
}
