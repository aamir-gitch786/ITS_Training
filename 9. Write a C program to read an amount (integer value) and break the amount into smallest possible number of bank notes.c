/*
9. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
    Test Data :
        Input the amount: 375
    Expected Output:
    There are:
    3 Note(s) of 100.00
    1 Note(s) of 50.00
    1 Note(s) of 20.00
    0 Note(s) of 10.00
    1 Note(s) of 5.00
    0 Note(s) of 2.00
    0 Note(s) of 1.00

*/
#include<stdio.h>
int main()
{
    int amount,hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    hundred=amount/100;
    amount-=hundred*100;

    fifty=amount/50;
    amount-=fifty*50;

    twenty=amount/20;
    amount-=twenty*20;

    ten=amount/10;
    amount-=ten*10;

    five=amount/5;
    amount-=five*5;

    two=amount/2;
    amount-=two*2;

    one=amount/1;//here you can print amount itself also.

    printf("%d Notes of 100.00\n",hundred);
    printf("%d Notes of 50.00\n",fifty);
    printf("%d Notes of 20.00\n",twenty);
    printf("%d NOtes of 10.00\n",ten);
    printf("%d Notes of 5.00\n",five);
    printf("%d Notes of 2.00\n",two);
    printf("%d Notes of 1.00\n",one);
    return 0;

}
