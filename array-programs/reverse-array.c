#include <stdio.h>

int main() {
    int arr[5];

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Array को उल्टे क्रम में print करें
    printf("Reversed Array: ");

    for(int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
