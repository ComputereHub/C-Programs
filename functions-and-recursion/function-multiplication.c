#include <stdio.h>

// गुणा करने वाला Function
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    // Input लें
    scanf("%d %d", &num1, &num2);

    // Function call करें
    printf("Product = %d", multiply(num1, num2));

    return 0;
}
