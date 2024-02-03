// Write a C program to create student structure and display its details.

#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void displayStudentDetails(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student s1 = {"John Doe", 101, 85.5};
    
    displayStudentDetails(s1);

    return 0;
}
