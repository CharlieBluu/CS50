#include <stdio.h>

int main(void){
    int n_scores;
    do{
        printf ("How many grades do you want to calculate the average of? ");
        scanf("%i", &n_scores);
    } while(n_scores<0);
    
    int scores[n_scores];
    for (int i = 0; i < n_scores; i++) {
        printf("Insert score %i: ", i + 1);
        scanf("%i", &scores[i]);
    }
    int sum = 0
    for (int i = 0; i < n_scores; i++) {
        sum += scores[i];
    }

    printf("The average of these scores is: %f\n", (float) sum / n_scores)`;

    return 0;
}