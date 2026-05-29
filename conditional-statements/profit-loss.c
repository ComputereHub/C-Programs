#include <stdio.h>

int main() {

    int cp, sp;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    // profit या loss check
    if(sp > cp) {
        printf("Profit = %d", sp - cp);
    }
    else {
        printf("Loss = %d", cp - sp);
    }

    return 0;
}
