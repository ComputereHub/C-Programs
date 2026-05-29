#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }

    // i को सीधे लूप के अंदर बनाया गया है
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break; // भाग होते ही लूप को रोक दें
        }
    }

    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}
