#include <stdio.h>

int main() {
    int arr1[3], arr2[3], arr3[6];

    // पहला array input करें
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr1[i]);
    }

    // दूसरा array input करें
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr2[i]);
    }

    // पहले array को merge करें
    for(int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }

    // दूसरे array को merge करें
    for(int i = 0; i < 3; i++) {
        arr3[i + 3] = arr2[i];
    }

    printf("Merged Array: ");

    for(int i = 0; i < 6; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
