#include <stdio.h>

int main() {
    int a, r;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Reversed digits: ");

   
    if (a == 0) {
        printf("0");
    } else {
        
        if (a < 0) {
            printf("-");
            a = -a;
        }

        do {
            r = a % 10;
            printf("%d", r);
            a = a / 10;
        } while (a != 0);
    }

    printf("\n");
    return 0;
}
