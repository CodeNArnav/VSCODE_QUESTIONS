//Question 6 — Print a Consecutive-Number Triangle
/*Problem statement: Print consecutive positive integers across triangular rows. Row 1 has one number, row 2 has two,
and so on. Counting starts at 1 and continues across rows.
*/

#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf(" ");
            }
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
