#include <stdio.h>

int main() {
    int a[2][2], transpose[2][2];

    // Matrix a में elements input करना
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Rows को Columns में और Columns को Rows में बदलना (Transpose करना)
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Transpose की हुई Matrix को print करना
    printf("Transpose Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
