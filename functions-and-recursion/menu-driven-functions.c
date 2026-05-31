#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int choice, num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Result = %d", add(num1, num2));
            break;

        case 2:
            printf("Result = %d", subtract(num1, num2));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
