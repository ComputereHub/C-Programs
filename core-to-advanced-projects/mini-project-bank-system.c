#include <stdio.h>

int main() {

    float balance = 10000;
    float amount;

    // Withdraw Amount Input करें
    printf("Enter Withdraw Amount: ");
    scanf("%f", &amount);

    if(amount <= balance) {

        balance -= amount;

        printf("Transaction Successful\n");
        printf("Remaining Balance = %.2f", balance);
    }
    else {

        printf("Insufficient Balance");
    }

    return 0;
}
