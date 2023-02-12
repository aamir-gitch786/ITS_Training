/*2. Write a C program to read and display all type of variables.

Expected Output:
    123
    34.67
    A
*/


#include<stdio.h>
int main()
{ int a;float b;char c;
    printf("Enter the integer : ");
    scanf("%d",&a);
    printf("Enter the Real number : ");
    scanf("%f",&b);
    fflush(stdin);
    printf("Enter the charater : ");
    scanf("%c",&c);

    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c",c);
    return 0;

}
