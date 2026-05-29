#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // जब तक n 0 नहीं हो जाता
    while (n > 0) {
        sum += n % 10;  // आखिरी अंक को sum में जोड़ें
        n /= 10;        // आखिरी अंक को नंबर से हटा दें
    }

    printf("Sum = %d\n", sum);

    return 0;
}
