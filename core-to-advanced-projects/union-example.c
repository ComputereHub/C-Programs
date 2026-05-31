#include <stdio.h>

// Union Define करें
union Data {
    int number;
    float decimal;
};

int main() {

    union Data d;

    d.number = 100;

    printf("Number = %d\n", d.number);

    return 0;
}
