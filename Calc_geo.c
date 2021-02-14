#include"Calc_geo.h"
void Rectangle()
{
    float s1,s2;
    printf("Enter Length: ");
    scanf("%f",&s1);
    printf("\nEnter Breadth: ");
    scanf("%f",&s2);
    printf("\nArea of Rectangle is: %f",s1*s2);
    printf("\nPerimeter of Rectangle is: %f",2*(s1+s2));
}

void Square()
{
    float s1;
    printf("Enter Side: ");
    scanf("%f",&s1);
    printf("\nArea of Rectangle is: %f",s1*s1);
    printf("\nPerimeter of Rectangle is: %f",4*s1);
}

void Circle()
{
    float s1;
    printf("Enter Radius: ");
    scanf("%f",&s1);
    printf("\nArea of Circle is: %f",3.14*s1*s1);
    printf("\nPerimeter of Perimeter is: %f",2*3.14*s1);
}
