#include <stdio.h>

int main() {

    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // choice के आधार पर operation चलेगा
    switch(choice) {

        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Subtract = %d", a - b);
            break;

        case 3:
            printf("Multiply = %d", a * b);
            break;

        case 4:
            printf("Divide = %d", a / b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
