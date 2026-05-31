#include <stdio.h>

// Student Structure
struct Student {

    int roll;
    char name[30];
    float marks;
};

int main() {

    struct Student s;

    // Student Details Input करें
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Student Record Display करें
    printf("\nStudent Record\n");
    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
