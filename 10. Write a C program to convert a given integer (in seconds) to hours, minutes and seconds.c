/*
10. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
    Input seconds: 25300
Expected Output:
    There are:
    H:M:S - 7:1:40

*/
#include<stdio.h>
int main()
{
    int seconds,H,M;
    printf("Input seconds: ");
    scanf("%d",&seconds);
    H=seconds/3600;
    seconds-=H*3600;

    M=seconds/60;
    seconds-=M*60;


    printf("H:M:S - %d:%d:%d",H,M,seconds);
    return 0;
}
