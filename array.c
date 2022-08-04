#include<stdio.h>
int main()
{
    int a,b,c, rows;

    printf("Enter the number of rows\t");
    scanf ("%d", &rows);
    for(a=1;a<=rows;a++)
    {
        for (b=a; b<rows; b++)
        {
            printf(" ");
        }
        for(c=1;c<=rows;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

