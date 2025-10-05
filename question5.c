
#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("The number is palindrome %d", original);
    } else {
        printf("The number is not palindrome %d", original);
    }

    return 0;
}
