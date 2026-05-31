#include <stdio.h>

int main() {
    int a[2][2];

    // Matrix elements input करना
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // हर Row (पंक्ति) का योग निकालना और print करना
    for(int i = 0; i < 2; i++) {
        int row_sum = 0;
        for(int j = 0; j < 2; j++) {
            row_sum += a[i][j];
        }
        printf("Row %d Sum = %d\n", i + 1, row_sum);
    }

    // हर Column (स्तंभ) का योग निकालना और print करना
    for(int j = 0; j < 2; j++) {
        int col_sum = 0;
        for(int i = 0; i < 2; i++) {
            col_sum += a[i][j];
        }
        printf("Column %d Sum = %d\n", j + 1, col_sum);
    }

    return 0;
}
