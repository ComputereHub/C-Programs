#include <stdio.h>

int main() {

    int num;

    // Number Input करें
    printf("Enter Number: ");
    scanf("%d", &num);

    // Optimized Even Odd Check
    if(num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
