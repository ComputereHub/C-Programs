#include <stdio.h>

int main() {

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    // sign check
    if(num > 0)
        printf("Positive");

    else if(num < 0)
        printf("Negative");

    else
        printf("Zero");

    return 0;
}
