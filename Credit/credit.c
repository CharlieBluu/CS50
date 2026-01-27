#include <stdio.h>

int main (void) { 

//Read card number
    long long card_number;
    do {
        printf("Number: ");
        scanf("%lld", &card_number);
    } while (card_number < 0);

//Count digits
    int digit_count = 0;
    long long temp = card_number;
    while (temp > 0) {
        digit_count++;
        temp /= 10;
    }
    if  (digit_count > 16) {
        printf("INVALID\n");
        return 0;
    }

    //Get first two digits
    long long first_two_digits = card_number;
    while (first_two_digits >= 100) {
        first_two_digits /= 10;
    }

    //Extract digits into an array
    int digits[16];
    temp = card_number;
    for (int i = 0; i < digit_count; i++) {
        digits[i] = temp % 10;
        temp /= 10;
    }
    //Luhn's Algorithm
    int sum = 0;
    for (int i = 0; i < digit_count; i++) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            sum += doubled / 10 + doubled % 10;
        } else {
            sum += digits[i];
        }
    }
    if (sum % 10 != 0) {
        printf("INVALID\n");
        return 0;
    }

    //Determine card type
    if (digit_count == 15 &&
   (first_two_digits == 34 || first_two_digits == 37)) {
    printf("AMEX\n");
    }
    else if (digit_count == 16 && first_two_digits >= 51 && first_two_digits <= 55) {
        printf("MASTERCARD\n");
    } 
    else if ((digit_count == 13 || digit_count == 16) &&
               digits[digit_count - 1] == 4) {
        printf("VISA\n");
    } 
    else {
        printf("INVALID\n");
    }
    return 0;
}