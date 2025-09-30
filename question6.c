
#include <stdio.h>

int main() {
    int i,sum_even=0,sum_odd=0;
    for(i=1;i<=20;i++){
        if(i/2*2==i){
          sum_even=sum_even+i;
        }
        else{
            sum_odd=sum_odd+i;
           
        }
    }
     printf("sum of even is:%d\n",sum_even);
    printf("sum of odd is:%d",sum_odd);

    return 0;
}
