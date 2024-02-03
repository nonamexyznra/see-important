//Write a C program to create employee structure and display its details using structure pointer.

#include <stdio.h>

struct Employee {
    char name[50];
    int employeeId;
    float salary;
};

void displayEmployeeDetails(struct Employee *emp) {
    printf("Name: %s\n", emp->name);
    printf("Employee ID: %d\n", emp->employeeId);
    printf("Salary: %.2f\n", emp->salary);
}

int main() {
    struct Employee e1 = {"Jane Doe", 201, 50000.0};
    struct Employee *ptrEmp = &e1;
    
    displayEmployeeDetails(ptrEmp);

    return 0;
}
