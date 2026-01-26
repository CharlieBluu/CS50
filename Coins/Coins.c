#include <stdio.h>

int main(void) {
    int cents;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    // Prompt user for input
    do {
        printf("Change owed: ");
        scanf("%d", &cents);
    } while (cents < 0);

    // Calculate number of quarters
    if (cents >= 25) {
        quarters = cents / 25;
        cents %= 25;
    }

    // Calculate number of dimes
    if (cents >= 10) {
        dimes = cents / 10;
        cents %= 10;
    }

    // Calculate number of nickels
    if (cents >= 5) {
        nickels = cents / 5;
        cents %= 5;
    }

    // Calculate number of pennies
    pennies = cents;

    // Print breakdown of coins
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);
    printf("Total coins: %d\n", quarters + dimes + nickels + pennies);

    return 0;
}