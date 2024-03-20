#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess;
    int attempts = 0;

    // initialize random seed
    srand(time(NULL));

    // generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    printf("Welcome to the Random Guessing Number Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n\n");

    // loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts++;

        if(guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if(guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! You guessed the number in %d attempts.\n",attempts);
        }
    } while(guess != randomNumber);

    return 0;
}
