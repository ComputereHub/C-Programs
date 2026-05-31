#include <stdio.h>

// Product Structure
struct Product {

    int id;
    char name[30];
    int quantity;
};

int main() {

    struct Product p;

    // Product Details Input करें
    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    // Product Details Display करें
    printf("\nInventory Details\n");
    printf("ID = %d\n", p.id);
    printf("Name = %s\n", p.name);
    printf("Quantity = %d\n", p.quantity);

    return 0;
}
