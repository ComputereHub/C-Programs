#include <stdio.h>

int main() {
    int arr[5], key;
    int low = 0, high = 4, mid;
    int found = 0;

    // Sorted Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Search करने वाला element input करें
    scanf("%d", &key);

    // Binary Search
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
