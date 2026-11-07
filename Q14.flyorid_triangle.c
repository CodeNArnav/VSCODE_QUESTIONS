//Q14. Question 14 — Print Floyd's Triangle
/*Problem statement: Given n, print Floyd's triangle with n rows. Fill it with consecutive positive integers starting at 1,
placing one number on row 1, two on row 2, and so on.
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
