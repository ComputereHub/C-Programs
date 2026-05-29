#include <stdio.h>

int main() {

    int start, end, i;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    // range में even odd print
    for(i = start; i <= end; i++) {

        if(i % 2 == 0)
            printf("%d Even\n", i);

        else
            printf("%d Odd\n", i);
    }

    return 0;
}
