#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int i,a[50],c,k,j;
    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<10;i++){
        c=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        for(k=i+1;k<10;k++){
            if(a[i]==a[k]){
                c++;
            }
        }
        if(c==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}