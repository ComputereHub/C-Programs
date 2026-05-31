#include <stdio.h>

// Prime Number Check Function
int isPrime(int num) {

    // 2 से छोटे number prime नहीं होते
    if(num < 2)
        return 0;

    // Divisibility check करें
    for(int i = 2; i < num; i++) {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    // Number input लें
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}
