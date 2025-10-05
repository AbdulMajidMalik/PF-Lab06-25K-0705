#include <stdio.h>

int main() {
    int i, n;
    char c;

    do {
        printf("Enter the number: ");
        scanf("%d", &n);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }

        printf("Do you want any other table: ");
        scanf(" %c", &c);
    } while (c == 'y' || c == 'Y');

    printf("End\n");
    return 0;
}
