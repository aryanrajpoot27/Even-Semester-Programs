#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,T,i,j,sum=0,isPrime;
    scanf("%d",&T);
    while(T>0){
        scanf("%d",&n);
       for(i = 2; i <= n; i++) {
     isPrime = 1;
        for(j = 2; j <=(i/2); ++j) {
            if(i%j==0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
            sum += i;
    }
        printf("%d\n",sum);
        sum=0;
        T--;
    }
    return 0;
}