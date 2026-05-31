#include <stdio.h>

// Macro Define करें
#define PI 3.14

int main() {

    float radius, area;

    // Radius input करें
    printf("Enter Radius: ");
    scanf("%f", &radius);

    // Area Calculate करें
    area = PI * radius * radius;

    printf("Area = %.2f", area);

    return 0;
}
