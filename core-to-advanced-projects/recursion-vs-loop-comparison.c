#include <stdio.h>

// Recursive Function
int factorialRecursion(int n) {

    if(n == 0)
        return 1;

    return n * factorialRecursion(n - 1);
}

int main() {

    int num = 5;
    int factorialLoop = 1;

    // Loop Method
    for(int i = 1; i <= num; i++) {

        factorialLoop *= i;
    }

    printf("Loop Factorial = %d\n", factorialLoop);

    // Recursive Method
    printf("Recursion Factorial = %d",
           factorialRecursion(num));

    return 0;
}
