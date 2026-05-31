#include <stdio.h>

int main() {
    int arr[5];

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements: ");

    // Duplicate elements हटाएं
    for(int i = 0; i < 5; i++) {
        int duplicate = 0;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
