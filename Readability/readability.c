#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(const char text[]);
int count_words(const char text[]);
int count_sentences(const char text[]);


int main(void) {
   

    //Read text 
    printf("Text: ");
    char text[1000];
    fgets(text, 1000, stdin);

    //Count letters, words, sentences
    int letters = 0;
    int words = 1; // Start at 1 to account for the last word
    int sentences = 0;

    letters = count_letters(text);
    words = count_words(text);
    sentences = count_sentences(text);

    //Calculate Coleman-Liau index
    float L = ((float) letters / (float) words) * 100.0;
    float S = ((float) sentences / (float) words) * 100.0;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    //Print grade level
    int grade = round(index);
    if (grade < 1) {
        printf("Before Grade 1\n");
    } else if (grade >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %d\n", grade);
    }



    return 0;
}




int count_letters(const char text[]) {
    int letters = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            letters++;
        }
    }
    return letters;
}

int count_words(const char text[])
{
    int words = 1;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    return words;
}

int count_sentences(const char text[]) {
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }
    return sentences;
}