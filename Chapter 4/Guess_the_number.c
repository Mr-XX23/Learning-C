#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number, guess, nguess;
    nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Geenrate random number between 1 to 100
    // printf("The number is %d", number);

    //keep running the loop untill the number is guessed

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess>number) {
            printf("Lower number please\n");
        }
        else if (guess<number) {
            printf("Higher number please\n");
        }
        else {
            printf("The number is %d. You guessed it in %d attempts\n", number, nguess);
        }
        nguess++;
    } while (guess!=number);
    
    return 0;
}