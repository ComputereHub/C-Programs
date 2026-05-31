#include <stdio.h>

// 1 से n तक का योग निकालने वाला Recursive Function
int sum(int n) {

    // Base Condition
    if(n == 1)
        return 1;

    return n + sum(n - 1);
}

int main() {
    int num;

    scanf("%d", &num);

    printf("Sum = %d", sum(num));

    return 0;
}
