/*
12. C program to calculate total average and percentage of five subjects

    Example Input
    Enter marks of five subjects: 95 76 85 90 89
    Output

    Total = 435
    Average = 87
    Percentage = 87.00
*/
#include<stdio.h>
int main()
{
    int subjects[5],total_sum=0;
    printf("Enter marks of five subjects: ");
    for(int i=0;i<5;i++)
        {scanf("%d",&subjects[i]);
          total_sum+=subjects[i];
        }
    printf("Total = %d\n",total_sum);
    printf("Average = %d\n",total_sum/5);
    printf("percentage = %.2f\n",(total_sum/(5*100.0))*100);
    return 0;
}
