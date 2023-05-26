#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[6];
    int max=0;
   
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max = a[i];
        }
         int sec=0;
        for(int i=0;i<6;i++){
            if(a[i]==max){
                continue;
            }
            else{
                if(a[i]>sec)
                    sec=a[i];
            }
        }
       
    
     printf("%d\n%d",max,sec);
    return 0;
}
