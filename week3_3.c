#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   
    int i=0,j,p,n,ans=0,arr[100];
    scanf("%d",&n);
    
    while(n>0){
        arr[i]=n%2;
        n = n/2;
        i++;
    }
    for(j=0; j<i; j++){
        if(arr[j]==1){
            arr[j]=0;
        }
        else
            arr[j]=1;
    }
    for(p=i-1; p>=0; p--){
        ans = ans + arr[p]*pow(2,p);
       
    }
    
    printf("%d",ans);
    
    return 0;
}