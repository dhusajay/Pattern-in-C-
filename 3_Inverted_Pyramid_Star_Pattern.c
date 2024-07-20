#include <stdio.h>

int main() {
    int rows, space, star;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (space = 0; space < rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}