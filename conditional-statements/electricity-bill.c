#include <stdio.h>

int main() {

    int unit, bill;

    printf("Enter units: ");
    scanf("%d", &unit);

    // simple bill calculation
    if(unit <= 100)
        bill = unit * 5;

    else
        bill = unit * 8;

    printf("Bill = %d", bill);

    return 0;
}
