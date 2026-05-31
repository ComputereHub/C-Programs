#include <stdio.h>

int main() {

    int arr[5] = {5, 2, 8, 1, 3};
    int temp;

    // Bubble Sort Logic
    for(int i = 0; i < 4; i++) {

        for(int j = 0; j < 4 - i; j++) {

            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Sorted Array Print करें
    printf("Sorted Array: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
