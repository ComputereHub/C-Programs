#include <stdio.h>

// Structure Define करें
struct Student {
    int roll;
    char name[20];
};

int main() {

    struct Student s1;

    // Data Input करें
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    // Data Display करें
    printf("Roll = %d\n", s1.roll);
    printf("Name = %s", s1.name);

    return 0;
}
