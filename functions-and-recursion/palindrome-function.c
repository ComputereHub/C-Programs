#include <stdio.h>

// Palindrome Check Function
int isPalindrome(int num) {

    int original = num;
    int reverse = 0;

    // Number reverse करें
    while(num > 0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    return original == reverse;
}

int main() {
    int num;

    // Number input लें
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}
