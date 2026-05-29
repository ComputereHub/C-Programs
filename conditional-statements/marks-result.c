#include <stdio.h>

int main() {

    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    // pass fail check
    if(marks >= 33)
        printf("Pass");

    else
        printf("Fail");

    return 0;
}
