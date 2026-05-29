#include <stdio.h>

int main() {
    int n, temp, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n; // असली नंबर को सुरक्षित रखें

    // जब तक n 0 से बड़ा है
    while (n > 0) {
        int rem = n % 10;          // आखिरी अंक निकालें
        sum += rem * rem * rem;    // क्यूब करके सीधे sum में जोड़ें
        n /= 10;                   // आखिरी अंक को हटा दें
    }

    // जांचें कि जोड़ असली नंबर के बराबर है या नहीं
    if (temp == sum)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
