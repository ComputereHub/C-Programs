#include <stdio.h>

int main() {
    int a[2][2], sum = 0;

    // Matrix elements input करना
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // मुख्य diagonal (विकर्ण) के elements का योग करना (जहाँ i == j हो)
    for(int i = 0; i < 2; i++) {
        sum += a[i][i]; 
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}
