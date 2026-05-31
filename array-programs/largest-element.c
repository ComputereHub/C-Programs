#include <stdio.h>

int main() {
    int arr[5];

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // पहले element को largest मान लें
    int largest = arr[0];

    // सबसे बड़ा element खोजें
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest Element = %d", largest);

    return 0;
}
