#include <stdio.h>

// भाग देने वाला Function
float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;

    // Input लें
    scanf("%f %f", &num1, &num2);

    // Division का result दिखाएँ
    printf("Result = %.2f", divide(num1, num2));

    return 0;
}
