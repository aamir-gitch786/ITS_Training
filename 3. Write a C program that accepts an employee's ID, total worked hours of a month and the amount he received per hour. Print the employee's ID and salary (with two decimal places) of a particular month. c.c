/*3. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
    Test Data :
        Input the Employees ID(Max. 10 chars): 0342
        Input the working hrs: 8
        Salary amount/hr: 15000
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00
*/
#include<stdio.h>
int main()
{   char ID[10];
    int hrs,amount_per_hour;
    printf("Input the Employees ID(Max. 10 chars):  ");
    fgets(ID,10,stdin);
    printf("Input the working hours of a month : ");
    scanf("%d",&hrs);
    printf("Salary amount/hr: ");
    scanf("%d",&amount_per_hour);

    printf("Employees ID = %s\n",ID);
    printf("Salary = U$ %.2f",(float)hrs*amount_per_hour);
}

