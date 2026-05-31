#include <stdio.h>

int main() {
    int arr[5];

    // Array के 5 elements input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Array के elements display करें
    printf("Array Elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
