//Stack smashing detector

#include<stdio.h>
void strcat(char*s, char*t)
{
    while(*s)
    s++;

    while(*s++ = *t++)
    ;
}
void main()
{
    char s[]="Hello,";
    char t[]="world";
    strcat(s, t);
    printf("%s", s);
}

