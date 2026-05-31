#include <stdio.h>

int main() {
    int arr[5];

    // Array input करें
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // पहले element को smallest मान लें
    int smallest = arr[0];

    // सबसे छोटा element खोजें
    for(int i = 1; i < 5; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest Element = %d", smallest);

    return 0;
}
