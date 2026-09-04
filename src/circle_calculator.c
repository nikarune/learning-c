// A very very simple program to practice math functions!
// Calculates things related to spheres & circles using a radius.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define PI 3.14159 // this is a macro (like in gamemaker)

/*
The difference between #define and the const keyword is that const variables are
stored in memory as read-only variables. On the other hand, #define tells the compiler
to basically replace every used instance of, for example, PI, with the literal 3.14159.
*/

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    
    printf("Enter the circle's radius: ");
    scanf("%lf", &radius); // %lf is used for doubles. think of it as "long float".

    area = PI * pow(radius, 2); // This is the formula for the area of a circle!
    surface_area = 4 * PI * pow(radius, 2); // This is the formula for the surface area of a sphere!
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area (for circles): %.3lf\n", area);
    printf("Surface Area (for spheres): %.3lf\n", surface_area);
    printf("Volume (for spheres): %.3lf", volume);


    return 0;
}