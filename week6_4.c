#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
   
    int i,j,n;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d\n",&a[i]);
  }
  
int flag,num,flag1=0;
  for (i = 0; i < n; i++){
    flag=0;
        for (j = 0 ; j < n; j++){
            if (a[i] == a[j]){
              flag++;
            }
        }
    
          if(flag>flag1){
           flag1=flag;
            num = a[i];
          
          }
        }
  for(i=0;i<flag1;i++){
    printf("%d ",num);
  }
    return 0;
}