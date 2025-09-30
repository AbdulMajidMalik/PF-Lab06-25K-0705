#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 
    
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent (power): ");
    scanf("%d", &exponent);

    if (exponent == 0) {
        printf("%d^%d = 1\n", base, exponent);
        return 0;
    }

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("%d^%d = %lld\n", base, exponent, result);
    return 0;
}
