#include <stdio.h>

int main() {

    char signal;

    printf("Enter signal color (r/y/g): ");
    scanf(" %c", &signal);

    // traffic signal logic
    if(signal == 'r')
        printf("Stop");

    else if(signal == 'y')
        printf("Ready");

    else if(signal == 'g')
        printf("Go");

    else
        printf("Invalid Signal");

    return 0;
}
