#include<stdio.h>
#include<conio.h>

// constant 
#define M_PI 3.14159265358979323846 

void main() {
    // Area of Rectangle
    int l, b, area_rectangle;
    printf("Enter the length and breadth \n");
    scanf("%d %d", &l, &b);
    area_rectangle = l * b;
    printf("The area of rectangle is %d", area_rectangle);

    // Area of Triangle
    float base , height_tri, area_triangle;
    printf("Enter the base and height \n");
    scanf("%f %f", &base, &height_tri);
    area_triangle = ( base * height_tri ) / 2;
    printf("The area of Triangle is %f", area_triangle);

    // Area of Circle 
    float r, area_circle, height_cyli, area_cylinder;
    printf("Enter the area of cricle \n");
    scanf("%f", &r);
    area_circle = M_PI * r * r;
    printf("The area of Cricle is %f \n", area_circle);
    printf("Enter the height_cyli \n");
    scanf("%f", &height_cyli);
    area_cylinder = M_PI * r * r * height_cyli;
    printf("The area of cylinder is %f \n", area_cylinder);
}
