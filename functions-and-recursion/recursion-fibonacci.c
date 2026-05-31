#include <stdio.h>

// Fibonacci Series का Recursive Function
int fibonacci(int n) {

    // Base Condition
    if(n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    scanf("%d", &terms);

    // Fibonacci Series print करें
    for(int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
