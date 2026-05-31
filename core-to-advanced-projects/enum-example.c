#include <stdio.h>

// Enum Define करें
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {

    enum Day today;

    today = TUESDAY;

    printf("Day Value = %d", today);

    return 0;
}
