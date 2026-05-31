#include <stdio.h>

int main() {

    FILE *fp;

    // File Create/Open करें
    fp = fopen("data.txt", "w");

    // File में Data लिखें
    fprintf(fp, "Hello File Handling");

    // File Close करें
    fclose(fp);

    printf("Data Written Successfully");

    return 0;
}
