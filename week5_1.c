#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,arr[50];
    for(i=0;i<6;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++){
        if(i!=2){
        printf("%d ",arr[i]);
        }
    }
    return 0;
}