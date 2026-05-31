#include <stdio.h>

// Recursive Function से Factorial निकालें
int factorial(int n) {

    // Base Condition
    if(n == 0 || n == 1)
        return 1;

    // Recursive Call
    return n * factorial(n - 1);
}

int main() {
    int num;

    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}
