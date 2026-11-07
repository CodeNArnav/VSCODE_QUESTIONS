//Q Print a Solid Square
/* Problem statement: Given a positive integer n, print a square containing n rows and n columns of asterisks (*). Do not
print spaces between asterisks. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
