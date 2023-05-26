#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
  int a[50],i,sum=0;
 
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
    sum = sum + a[i];
  }
  printf("%d",sum);
    return 0;
}
