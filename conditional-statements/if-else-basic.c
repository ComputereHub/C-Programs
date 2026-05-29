#include <stdio.h>

int main() {

    int num;

    // यूजर से number लेना
    printf("Enter a number: ");
    scanf("%d", &num);

    // check करना number positive है या नहीं
    if(num > 0) {
        printf("Positive Number");
    }
    else {
        printf("Negative Number");
    }

    return 0;
}
