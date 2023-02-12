
/*
7.  Write a C program to find the third angle of a triangle if two angles are given.
    Expected Output :
        Input two angles of triangle separated by comma : 50,70
        Third angle of the triangle : 60
*/
#include<stdio.h>
int main()
{
    int side1,side2;
    printf("Input two angles of triangle separated by comma : ");
    scanf("%d,%d",&side1,&side2);
    printf("Third angle of the triangle : %d",180-(side1+side2));
    return 0;
}
