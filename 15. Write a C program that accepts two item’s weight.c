
/*

15. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

    Test Data :
    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4
    Expected Output:
    Average Value = 19.444444
*/
#include<stdio.h>
int main()
{
    float item_w1,item_w2,item_1,item_2,average;
    printf("Weight - Item1: ");
    scanf("%f",&item_w1);
    printf("No. of item1: ");
    scanf("%f",&item_1);
    printf("Weight -Item2: ");
    scanf("%f",&item_w2);
    printf("NO. of item2: ");
    scanf("%f",&item_2);
    average=(item_w1*item_1+item_w2*item_2)/(item_1+item_2);
    printf("Average value = %.6f",average);
    return 0;
}


