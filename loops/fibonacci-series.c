#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter terms: ");
    scanf("%d", &n);

    // i को सीधे लूप के अंदर ही डिक्लेयर किया गया है
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);

        int nextTerm = a + b; // नया नंबर (c की जगह समझने में आसान नाम)
        a = b;                // b की वैल्यू a में डालें
        b = nextTerm;         // नए नंबर को b में डालें
    }

    printf("\n"); // आखिरी में एक नई लाइन के लिए
    return 0;
}
