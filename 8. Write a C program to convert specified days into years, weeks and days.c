/*
8. Write a C program to convert specified days into years, weeks and days.
   Note: Ignore leap year.

    Test Data :
        Number of days : 1329
    Expected Output :
        Years: 3
        Weeks: 33
        Days: 3
*/
#include<stdio.h>
int main()
{
    int N,year,weeks,days;
    printf("Enter the number of days : ");
    scanf("%d",&N);
    year=N/365;
    weeks=(1329-year*365)/7;
    days=(1329-year*365-weeks*7);
    printf("Years : %d\n",year);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d",days);
    return 0;
}
