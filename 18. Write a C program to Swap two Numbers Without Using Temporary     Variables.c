
//18. Write a C program to Swap two Numbers Without Using Temporary     Variables.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter Seconde number\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping %d and %d ",a,b);
    return 0;

}


