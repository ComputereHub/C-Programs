#include <stdio.h>

int main() {
    int n, temp, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n; // असली नंबर को सुरक्षित रखें

    // जब तक n 0 से बड़ा है, उल्टा करते रहें
    while (n > 0) {
        int rem = n % 10;            // आखिरी अंक निकालें
        reverse = reverse * 10 + rem; // उल्टा नंबर तैयार करें
        n /= 10;                     // आखिरी अंक को हटा दें (n = n / 10 का छोटा रूप)
    }

    // जांचें कि उलटा नंबर असली नंबर के बराबर है या नहीं
    if (temp == reverse)
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
