#include <stdio.h>

// दो संख्याओं का अंतर निकालने वाला Function
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;

    // User से संख्या input लें
    scanf("%d %d", &num1, &num2);

    // Function call करें
    printf("Difference = %d", subtract(num1, num2));

    return 0;
}
