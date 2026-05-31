#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int low = 0;
    int high = 4;
    int mid;

    // Binary Search Logic
    while(low <= high) {

        mid = (low + high) / 2;

        if(arr[mid] == key) {

            printf("Element Found");
            return 0;
        }
        else if(arr[mid] < key) {

            low = mid + 1;
        }
        else {

            high = mid - 1;
        }
    }

    printf("Element Not Found");

    return 0;
}
