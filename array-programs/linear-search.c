#include <stdio.h>

int main() {
    int arr[5], key;
    int found = 0;

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Search करने वाला element input करें
    scanf("%d", &key);

    // Linear Search
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
