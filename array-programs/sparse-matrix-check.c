#include <stdio.h>

int main() {
    int a[2][2], zero_count = 0;

    // Matrix elements input करना
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            // अगर element 0 है, तो counter बढ़ाएं
            if(a[i][j] == 0) {
                zero_count++;
            }
        }
    }

    // यदि 0 की संख्या कुल elements के आधे से ज़्यादा (यहाँ 2 से ज़्यादा) है
    if(zero_count > 2) {
        printf("Sparse Matrix");
    } else {
        printf("Not a Sparse Matrix");
    }

    return 0;
}
