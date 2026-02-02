#include <stdio.h>
#include <string.h>





int main(int argc, char *argv[]) {

    char plaintext[100];

    if (argc != 2) {
        printf("Please provide a key as a command-line argument.\n");
        return 1;
    }
    if (!isdigit(argv[1][0])) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    printf("plaintext: ");

    scanf("%s", plaintext);







}
