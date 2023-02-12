
//20. Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming.
#include <stdio.h>

int main() {
    float p, t, r, si;

    printf("Enter principle (P): ");
    scanf("%f", &p);
    printf("Enter time (T) in years: ");
    scanf("%f", &t);
    printf("Enter rate (R) per annum: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("Simple Interest: %.2f", si);

    return 0;
}

