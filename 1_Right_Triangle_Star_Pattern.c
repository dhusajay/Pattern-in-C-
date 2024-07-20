#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print stars in increasing order
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

