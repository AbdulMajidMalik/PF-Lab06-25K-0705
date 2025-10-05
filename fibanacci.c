#include <stdio.h>

int main() {
    int n, first = 0, second = 1, final= 0;
    
    printf("Enter range for fibonacci: ");
    scanf("%d", &n);
    printf("%d,%d,",first,second);
    
    for(int i = 0; i <= n; i++){
        final = first + second;
        printf("%d,",final);
        first = second;
        second = final;
        final = 0;
    }

    return 0;
}
