#include <stdio.h> 
/* int guessNumber(){ 
    int guess = 500 ;  
    if (guess < 555){ 
        printf("Your guess is too low \n");
    }else if (guess == 555){ 
        printf("Correct. You guessed it! \n");
    }else (guess > 555){ 
        printf("Your guess is too high \n");
        }
}
*/
#include <stdio.h>

void guessNumber(int guess) {
    // TODO: write your code here
    if (guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}