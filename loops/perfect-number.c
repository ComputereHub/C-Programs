#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // i को सीधे लूप के अंदर बनाया गया है
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i; // इसका मतलब है sum = sum + i
        }
    }

    if (sum == n)
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");

    return 0;
}
