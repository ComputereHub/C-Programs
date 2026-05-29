#include <stdio.h>

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // comparison check
    if(a == b)
        printf("Both are Equal");

    else if(a > b)
        printf("A is Greater");

    else
        printf("B is Greater");

    return 0;
}
