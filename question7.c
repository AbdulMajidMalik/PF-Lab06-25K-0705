#include <stdio.h>

int main() {
    int n;
    int correct_pin = 1234;

    do {
        printf("Enter your pin: ");
        scanf("%d", &n);

        if (n != correct_pin) {
            printf("Incorrect PIN. Try again.\n");
        }

    } while (n != correct_pin);

    printf("You entered the correct PIN.\n");

    return 0;
}
