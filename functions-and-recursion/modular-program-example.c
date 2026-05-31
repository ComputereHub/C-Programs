#include <stdio.h>

// Addition Function
int add(int a, int b) {
    return a + b;
}

// Subtraction Function
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", add(num1, num2));
    printf("Difference = %d", subtract(num1, num2));

    return 0;
}
