#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];

    // पहली Matrix input करें
    printf("Enter First Matrix:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // दूसरी Matrix input करें
    printf("Enter Second Matrix:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition करें
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Result Matrix display करें
    printf("Sum Matrix:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
