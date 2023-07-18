// Print the sum of given number in loop
// Loop problem


#include<stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 101; i <= 201; i++)
        {

       printf("The number is %d\n", i);
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);

    return 0;
}
