/*
17. Write a C program to calculate the distance between the two points.

    Test Data :
    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10
    Expected Output:
    Distance between the said points: 11.1803
*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    float distance;

    printf("Enter the value of x1: ");
    scanf("%f", &x1);
    printf("Enter the value of y1: ");
    scanf("%f", &y1);
    printf("Enter the value of x2: ");
    scanf("%f", &x2);
    printf("Enter the value of y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("Distance between the said points: %.4f", distance);

    return 0;
}
