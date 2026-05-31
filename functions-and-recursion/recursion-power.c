#include <stdio.h>

// Power निकालने वाला Recursive Function
int power(int base, int exp) {

    // Base Condition
    if(exp == 0)
        return 1;

    // Recursive Call
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;

    // Base और Exponent input लें
    scanf("%d %d", &base, &exp);

    // Result print करें
    printf("Result = %d", power(base, exp));

    return 0;
}
