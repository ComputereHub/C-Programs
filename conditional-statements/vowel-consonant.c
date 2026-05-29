#include <stdio.h>

int main() {

    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    // vowel check
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {

        printf("Vowel");
    }
    else {
        printf("Consonant");
    }

    return 0;
}
