/*
14. Write a C program to print the following characters in a reverse     way.
    Test Characters: 'X', 'M', 'L'

    Expected Output:
    The reverse of XML is LMX
*/
#include<stdio.h>
int main()
{
    char str[4];
    printf("Enter the charaters: ");
    fgets(str,sizeof(str),stdin);
    printf("The revers of %s is ",str);
    printf("%s",strrev(str));
    return 0;
}
/*printf("The revers of %s is %s ",str,strrev(str));
i think here strrev function run first
*/
