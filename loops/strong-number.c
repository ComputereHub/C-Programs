#include <stdio.h>

int main() {
    int n, temp, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n; // असली नंबर को सुरक्षित रखें

    while (n > 0) {
        int fact = 1;
        
        // n % 10 से सीधा आखिरी अंक मिल जाता है
        for (int i = 1; i <= n % 10; i++) {
            fact *= i;
        }

        sum += fact; // फैक्टोरियल को sum में जोड़ें
        n /= 10;     // आखिरी अंक को हटा दें
    }

    // चेक करें कि जोड़ असली नंबर के बराबर है या नहीं
    if (temp == sum)
        printf("Strong Number\n");
    else
        printf("Not Strong\n");

    return 0;
}
