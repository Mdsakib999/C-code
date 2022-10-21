// Check two number using condition.


#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 30) {
        printf("n is less then 30\n");
    }
    else if(n < 50) {
        printf ("n is less then 50\n");
    }
    return 0;
}
