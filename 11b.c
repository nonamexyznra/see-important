//Write a C program to find area and perimeter of circle using function.

#include <stdio.h>

#define PI 3.14159

float area(float radius) {
    return PI * radius * radius;
}

float perimeter(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Area: %.2f\n", area(radius));
    printf("Perimeter: %.2f\n", perimeter(radius));

    return 0;
}
