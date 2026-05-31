#include <stdio.h>

// दो संख्याओं का योग निकालने वाला Function
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // User से दो संख्या input लें
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call करके result print करें
    printf("Sum = %d", add(num1, num2));

    return 0;
}
