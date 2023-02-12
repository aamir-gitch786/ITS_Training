/*
6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
    Expected Output :
        Input minutes: 546
        9 Hours, 6 Minutes
*/
#include<stdio.h>
int main()
{
    int minutes;
    printf("Input minutes: ");
    scanf("%d",&minutes);
    printf("%d Hours, %d Minutes",minutes/60,minutes%60);
    return 0;
}
