#include <stdio.h>

int main() {
    int num, original, digit, fact, sum_digits, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    sum_digits = 0; // initialise sum = 0

    while (num > 0) {
        digit = num % 10;
        fact = 1; // initialise fact = 1
        for (i = 2; i <= digit; i++) {
            fact *= i;
        }
        sum_digits = sum_digits + fact;
        printf("\ndigit=%d sum fact=%d", digit, sum_digits);
        num = num / 10;
    }

    original == sum_digits ? printf("\nSTRONG no") : printf("\nNot STRONG no");
    printf("\n I am out of the loop because num=%d...", num);

    return 0;
}