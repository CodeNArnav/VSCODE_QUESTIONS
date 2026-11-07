//Question 15 — Print a Butterfly Pattern
/*Problem statement: Given an odd integer n, print a butterfly made of asterisks. The top half widens row by row and the
lower half mirrors it. Use spaces between the left and right wings.*/



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        int stars;

        if (i <= mid) {
            stars = i;
        } else {
            stars = n - i + 1;
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * (mid - stars); j++) {
            printf(" ");
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
