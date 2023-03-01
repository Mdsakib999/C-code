// Grading using C programming.

#include<stdio.h>
char scoreTograde (int score);
int main(void)
{
    int score;
    char grade;
    printf("enter the test score (0-100):");
    scanf("%d",&score);
    grade = scoreTograde (score);
    printf("the grade is : %c\n",grade);
    return 0;
}
char scoreTograde (int score)
{
    char grade;
        if (score >= 90)
            grade = 'A';
    else if(score >= 80)
            grade = 'B';
    else if(score >= 70)
            grade = 'C';
    else
        grade = 'F';
    return grade;
}
