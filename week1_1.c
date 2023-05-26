#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int T,n,i,temp=1,rem,result=0;
    scanf("%d",&T);
    while(T>0){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     temp= temp*i;    
    }
    while(temp>0){
        rem = temp%10;
        result = result + rem ;
        temp = temp/10;
    }
    printf("%d\n",result);
    T--;
    temp=1;
        result=0;
    }
    return 0;
}