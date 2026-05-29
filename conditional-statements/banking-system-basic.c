#include <stdio.h>

int main() {

    int balance = 10000, withdraw;

    printf("Enter withdraw amount: ");
    scanf("%d", &withdraw);

    // balance check
    if(withdraw <= balance) {

        balance = balance - withdraw;

        printf("Remaining Balance = %d", balance);
    }
    else {
        printf("Insufficient Balance");
    }

    return 0;
}
