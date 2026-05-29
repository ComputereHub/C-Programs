#include <stdio.h>

int main() {

    int choice;

    printf("1. Tea\n2. Coffee\n3. Juice\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // menu selection
    switch(choice) {

        case 1:
            printf("Tea Selected");
            break;

        case 2:
            printf("Coffee Selected");
            break;

        case 3:
            printf("Juice Selected");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
