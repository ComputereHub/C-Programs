#include <stdio.h>

// Armstrong Number Check Function
int isArmstrong(int num) {

    int original = num;
    int sum = 0;
    int digit;

    // Digits का cube जोड़ें
    while(num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num;

    // Number input लें
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
