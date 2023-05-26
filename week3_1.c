#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int l,r,k,i,div=0;
    scanf("%d\n %d\n %d\n",&l,&r,&k);
    for(i=l;i<=r;i++){
        if(i%k==0){
            div++;
        }
    }
    printf("%d",div);
    
    return 0;
}