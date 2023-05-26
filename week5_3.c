#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
int a[9],max=0;
    for(int i=0;i<9;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=1;i<=max;i++){
        int c=0;
        for(int j=0;j<9;j++){
            if(i==a[j]){
                c++;
            }
        }
        if(c>0){
            printf("%d %d\n",i,c);
        }
    }
    return 0;
}