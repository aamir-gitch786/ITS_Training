 /*4. Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
    Expected Output :
        Input the radius of the sphere : 2.56
        The volume of sphere is 70.276237.
*/
#include<stdio.h>
const float PI = 3.14159265358979323846264338327950288419716939937510;
int main()
{
    float r,volume;
    printf("Input the radius of the sphere : ");
    scanf("%f",&r);
    printf("The volume of sphere is %f",(4.0/3.0)*PI*(r*r*r));
    return 0;
}

