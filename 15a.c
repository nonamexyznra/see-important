//Write a C program to find roots of quadratic equations. 

#include <stdio.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
