#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // जब तक n 0 से बड़ा है, लूप चलेगा
    while (n > 0) {
        count++;    // अंकों की गिनती बढ़ाएं
        n /= 10;    // आखिरी अंक को हटा दें (n = n / 10 का छोटा रूप)
    }

    printf("Digits = %d\n", count);

    return 0;
}
