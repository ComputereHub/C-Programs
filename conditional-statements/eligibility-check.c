#include <stdio.h>

int main() {

    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    // voting eligibility check
    if(age >= 18) {
        printf("Eligible for Voting");
    }
    else {
        printf("Not Eligible");
    }

    return 0;
}
