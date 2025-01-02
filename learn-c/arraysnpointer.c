 /*int vowels[] = {5, 7, 0, 1, 9};
int *pvowels = vowels;
int i;

// Print the addresses
for (i = 0; i < 5; i++) {
    printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
}

// Print the values
for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
}*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int col = 3;
    int i, j;
    /* TODO: define the 2D pointer variable here */
    int **twdpt = (int **)malloc(rows *sizeof(int *));
    /* TODO: complete the following line to allocate memory for holding three rows */
    pnumbers = (int **) malloc(col *sizeof(int));
    pnumbers[1] = (int **) malloc(col *sizeof(int));
    pnumbers[2]= (int **) malloc(col *sizeof(int));
    /* TODO: allocate memory for storing the individual elements in a row */
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        /* TODO: free memory allocated for each row */
    }

    /* TODO: free the top-level pointer */

  return 0;
}