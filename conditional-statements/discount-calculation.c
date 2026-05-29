#include <stdio.h>

int main() {

    int amount, discount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    // discount calculation
    if(amount >= 1000)
        discount = amount * 10 / 100;

    else
        discount = 0;

    printf("Discount = %d", discount);

    return 0;
}
