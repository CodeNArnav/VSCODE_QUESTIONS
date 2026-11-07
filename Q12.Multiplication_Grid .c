
//Question 12 — Print a Multiplication Table Grid
/*Problem statement: Given n, print an n-by-n multiplication grid. At row i and column j, print i multiplied by j. Separate
values with one space.*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > 1) {
                printf(" ");
            }
            printf("%d", i * j);
        }
        printf("\n");
    }

    return 0;
}
