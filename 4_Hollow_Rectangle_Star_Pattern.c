#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Loop through each column
        for (j = 1; j <= cols; j++) {
            // Print star for boundaries or for first and last row
            // Or print space for internal cells
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
