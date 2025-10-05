#include <stdio.h>
int main(){
	int n;
	int i;
	
	printf("Enter the number: ");
	scanf("%d" , &n);
	if(n<2){
		printf("The number is not less than 2");
		return 1;
	}
	
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("The number is not prime\n");
            return 0;
        }
    }

    printf("The number is prime\n");

	return 0;
}
