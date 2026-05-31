#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2] = {0}; // रिज़ल्ट मैट्रिक्स c को पहले ही 0 से इनिशियलाइज़ किया

    printf("पहली मैट्रिक्स (A) डालें:\n");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    printf("दूसरी मैट्रिक्स (B) डालें:\n");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            scanf("%d", &b[i][j]);

    // मैट्रिक्स गुणा का नियम: पहली मैट्रिक्स की Row और दूसरी का Column आपस में गुणा होकर जुड़ते हैं
    for(int i=0; i<2; i++) {         // A मैट्रिक्स की Rows के लिए
        for(int j=0; j<2; j++) {     // B मैट्रिक्स की Columns के लिए
            for(int k=0; k<2; k++) { // गुणा और जोड़ की प्रक्रिया के लिए तीसरा लूप (Row x Column)
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("गुणा का रिज़ल्ट (Multiplication Result):\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
