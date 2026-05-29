#include <stdio.h>

int main() {

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    // पहले positive check होगा
    if(num > 0) {

        // फिर even odd check होगा
        if(num % 2 == 0) {
            printf("Positive Even Number");
        }
        else {
            printf("Positive Odd Number");
        }

    }
    else {
        printf("Negative Number");
    }

    return 0;
}
