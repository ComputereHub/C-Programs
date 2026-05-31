#include <stdio.h>

int main() {
    int matrix[2][2];

    // Matrix के elements input करें
    printf("Enter 4 elements:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Matrix display करें
    printf("Matrix Elements:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
