#include <stdio.h>

int main() {
    int a[2][2], is_identity = 1;

    // Matrix elements input करना
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Identity matrix चेक करना (Diagonal में 1 और बाकी जगह 0 होना चाहिए)
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(i == j && a[i][j] != 1) {
                is_identity = 0; // Diagonal में 1 नहीं है
            }
            else if(i != j && a[i][j] != 0) {
                is_identity = 0; // Diagonal के बाहर 0 नहीं है
            }
        }
    }

    if(is_identity) {
        printf("Identity Matrix");
    } else {
        printf("Not an Identity Matrix");
    }

    return 0;
}
