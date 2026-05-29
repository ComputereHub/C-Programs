#include <stdio.h>

int main() {

    int salary, bonus;

    printf("Enter salary: ");
    scanf("%d", &salary);

    // bonus calculation
    if(salary >= 50000)
        bonus = 10000;

    else
        bonus = 5000;

    printf("Total Salary = %d", salary + bonus);

    return 0;
}
