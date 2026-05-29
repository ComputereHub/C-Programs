#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // जब तक n 0 से बड़ा है, लूप चलता रहेगा
    while (n > 0) {
        int rem = n % 10;            // आखिरी अंक निकालें
        reverse = reverse * 10 + rem; // उल्टा नंबर तैयार करें
        n /= 10;                     // आखिरी अंक को हटा दें (n = n / 10 का छोटा रूप)
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}
