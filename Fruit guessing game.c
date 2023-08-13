#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 5
#define MAX_WORD_LENGTH 10

char* words[MAX_WORDS] =
{
    "apple",
    "banana",
    "cherry",
    "grape",
    "orange"
};

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time

    int randomIndex = rand() % MAX_WORDS;
    char* targetWord = words[randomIndex];
    int wordLength = strlen(targetWord);
    char guessedWord[MAX_WORD_LENGTH];

    printf("Welcome to the Word Guessing Game!\n");
    printf("Guess the %d-letter word I'm thinking of.\n", wordLength);
    printf("\nHint : Fruit\n\n");

    int attempts = 0;
    int correct = 0;

    while (correct < wordLength)
{
        printf("Enter your guess: ");
        scanf("%s", guessedWord);

        for (int i = 0; i < wordLength; i++)
{
            if (guessedWord[i] == targetWord[i]) {
                printf("%c", guessedWord[i]);
                correct++;
}
            else
{
                printf("_");
}
}

        printf("\n");
        attempts++;
}

    printf("Congratulations! You guessed the word '%s' in %d attempts.\n", targetWord, attempts);

    return 0;
}
