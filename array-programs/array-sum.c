#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    // Array के elements input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // सभी elements का योग निकालें
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
