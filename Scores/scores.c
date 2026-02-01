#include <stdio.h>

#define MAX_SCORES 20

int main(void){
    int n_scores;
    do{
        printf ("How many grades do you want to calculate the average of? ");
        scanf("%d", &n_scores);
    } while(n_scores<1 || n_scores > MAX_SCORES);
    
    float scores[MAX_SCORES];
    for (int i = 0; i < n_scores; i++) {
        printf("Insert score %i: ", i + 1);
        scanf("%f", &scores[i]);
    }
    float sum = 0;
    for (int i = 0; i < n_scores; i++) {
        sum += scores[i];
    }

    printf("The average of these scores is: %f\n", sum / n_scores);

    return 0;
}