/*
13. C program to find area of an equilateral triangle
    Example Input

 Enter side of the equilateral triangle: 10
 Output

 Area of equilateral triangle = 43.3 sq. units

 C equivalent expression to find area of equilateral triangle -  (sqrt(3) / 4) * (side * side)

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float side;
    printf("Enter side of the equilateral triangle: ");
    scanf("%f",&side);
    printf("Area of equileral triangle = %.1f sq. units",sqrt(3)/4.0*pow(side,2));
    return 0;
}
