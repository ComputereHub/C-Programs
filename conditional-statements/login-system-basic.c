#include <stdio.h>

int main() {

    int password;

    printf("Enter password: ");
    scanf("%d", &password);

    // password check
    if(password == 1234) {
        printf("Login Successful");
    }
    else {
        printf("Wrong Password");
    }

    return 0;
}
