#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    int choice;
    float num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Two Numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Result = %.2f", num1 + num2);
            break;

        case 2:
            printf("Result = %.2f", num1 - num2);
            break;

        case 3:
            printf("Result = %.2f", num1 * num2);
            break;

        case 4:
            printf("Result = %.2f", num1 / num2);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
