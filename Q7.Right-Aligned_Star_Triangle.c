//Question 7 — Print a Right-Aligned Star Triangle
/*Problem statement: Given n, print a right-aligned triangle. Row 1 has one asterisk and row n has n asterisks. Use
leading spaces to align the right edges.
*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
