#include <stdio.h>

int main() {
    int arr[5], sum = 0;
    float average;

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum निकालें
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Average निकालें
    average = (float)sum / 5;

    printf("Average = %.2f", average);

    return 0;
}
