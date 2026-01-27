#include <stdio.h>
#include <ctype.h>

int compute_score(char word[], int letter_values[]);

int main(void) {
 
    // Get player words
    char answer1[30];
    printf("Player 1: ");
    scanf("%29s", answer1);

    char answer2[30];
    printf("Player 2: ");
    scanf("%29s", answer2);

    // Assign values to letters
    int letter_values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    // Calculate scores 
    int score1 = compute_score(answer1, letter_values);
    int score2 = compute_score(answer2, letter_values);

    // Determine winner
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }
    return 0;
}


int compute_score(char word[], int letter_values[]) {
    int score = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];
        if (isupper(c)) {
            score += letter_values[c - 'A'];
        } else if (islower(c)) {
            score += letter_values[c - 'a'];
        }
    }
    return score;
}