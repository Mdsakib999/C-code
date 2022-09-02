#include<stdlib.h>
#include<stdio.h>
int main()
{
    int length, position, i;
    printf("Input totul number:");
    scanf("%d, &length");
    printf("Input %d number\n", length);
    int array[length];
   for (i = 0; i < length; i++)
   {
       printf ("Input the %d position:", i+1);
       scanf("%d", &length);

   }
   printf("set your offset:");
   scanf("%d", &position);

   int swaped[length];
    for (i = position; i<length; i++) {
        swaped[i-position]=array[i];
        swaped[i]=array[i-position];
    }
    for (i = 0; i < length; ++i) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    for (i = 0; i < length; ++i){
        printf("%d\t", swaped[i]);
    }
}

