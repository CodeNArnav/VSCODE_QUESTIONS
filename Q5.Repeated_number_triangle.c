//Question 5 — Print a Repeated-Number Triangle
/*Problem statement: Given n, print n rows. On row i, print the number i exactly i times, separated by one space.
Input format: One integer n (1 ≤ n ≤ 20).*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
