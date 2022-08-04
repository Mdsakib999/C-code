#include<stdio.h>
int main()
{
    int a[5],sum, ave;      //int a[5]={40,50,60,20,60}; ai rokom o kora jai
    a[0]=40;
    a[1]=50;                //1st array basic
    a[2]=60;
    a[3]=20;
    a[4]=60;
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("%d\n", sum);
    ave= sum/5;
    printf("%d\n", ave);
    return 0;
}
