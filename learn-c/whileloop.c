//If the current number which is about to printed is less than 5, don't print it.
//If the current number which is about to printed is greater than 10, don't print it and stop the loop.
#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        /* your code goes here */
        i++ ;
            if (array[i] <5){
                continue;
        }
        if (i > 10){
            break; 

        }
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}