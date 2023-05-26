#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int T,n1,n2,r,temp,temp1;
    scanf("%d",&T);
     while(T--){
         
    scanf("%d %d",&n1, &n2);
   
   for(int i = n1 ; i<=n2 ; i++){
       temp = i;
       temp1 = i;
       int count = 0;
       while(temp1>0){
           count++;
           temp1 = temp1/10;
       }
       int sum = 0 ;
        while(temp>0){
            r = temp%10;
            sum = sum + pow(r,count);
            temp = temp/10;
        }
       
       if(sum==i){
       printf("%d ",i);
       }
   }
         printf("\n");
  
    }
    
    return 0;
}