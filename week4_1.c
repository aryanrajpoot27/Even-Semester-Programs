#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int n,m,x,sum=0,sum1=0;
    scanf("%d",&n);
    
    while(n>0){
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    while(sum>0){
        x = sum%10;
        sum1 += x;
        sum = sum/10;
    }
    printf("%d",sum1);
   
    
    return 0;
}