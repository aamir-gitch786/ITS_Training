//19. C program to convert temperature from Fahrenheit to Celsius.
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0/9.0);

    printf("Temperature in Celsius: %.2f", celsius);

    return 0;
}

