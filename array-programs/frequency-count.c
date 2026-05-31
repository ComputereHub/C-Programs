#include <stdio.h>

int main() {
    int arr[5], num, count = 0;

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // जिस संख्या की frequency निकालनी है
    scanf("%d", &num);

    // Frequency Count करें
    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}
