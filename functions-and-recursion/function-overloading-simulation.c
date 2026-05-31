#include <stdio.h>

// Integer Addition Function
int addInt(int a, int b) {
    return a + b;
}

// Float Addition Function
float addFloat(float a, float b) {
    return a + b;
}

int main() {
    printf("Integer Sum = %d\n", addInt(10, 20));

    printf("Float Sum = %.2f", addFloat(10.5, 20.5));

    return 0;
}
